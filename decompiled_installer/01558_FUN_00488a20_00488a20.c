// Function: FUN_00488a20
// Entry: 00488a20
// Size: 1273 bytes
// Thunk: false
// External: false


longlong __cdecl FUN_00488a20(uint *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  int local_20;
  int local_18;
  int iStack_14;
  uint local_10;
  
  if ((*(char *)((int)param_1 + 0x4d) == '\0') && (*(char *)((int)param_1 + 0x4e) == '\0')) {
    if (param_1[10] == 0) {
      return -0x19;
    }
    uVar10 = param_1[4];
    if (param_4 == 0) {
      local_18 = param_3;
    }
    else {
      if (param_4 != 1) {
        if (param_4 == 2) {
          iVar3 = *(int *)(uVar10 + 0xa0);
          uVar13 = 0;
          if (-1 < *(int *)(iVar3 + 4)) {
            iVar2 = 0;
            do {
              iVar5 = *(int *)(iVar2 + 0xc + iVar3);
              uVar11 = *(uint *)(iVar2 + 8 + iVar3);
              if ((iVar5 < 0) || (uVar9 = uVar13 + 1, *(uint *)(uVar10 + 0x90) <= uVar9)) break;
              puVar4 = (uint *)(iVar2 + iVar3);
              uVar13 = *puVar4;
              iVar12 = *(int *)(iVar2 + 4 + iVar3);
              iVar2 = uVar9 * 0x18;
              *(uint *)(iVar2 + iVar3) = uVar11 + *puVar4;
              *(uint *)(iVar2 + 4 + iVar3) = iVar5 + iVar12 + (uint)CARRY4(uVar11,uVar13);
              iVar3 = *(int *)(uVar10 + 0xa0);
              iVar5 = *(int *)(iVar3 + 4 + iVar2);
              uVar13 = uVar9;
            } while ((0 < iVar5) || (-1 < iVar5));
          }
          iVar3 = FUN_00489460((int)param_1,uVar13);
          iVar2 = iVar3 >> 0x1f;
          if (iVar3 != 0) goto LAB_00488f11;
          iVar3 = uVar13 * 0x18;
          while( true ) {
            uVar11 = param_1[4];
            if (*(code **)(uVar11 + 0x84) == (code *)0x0) break;
            lVar15 = (**(code **)(uVar11 + 0x84))(uVar11,param_1[6],0,0,2);
            if (lVar15 < 0) {
              return lVar15;
            }
            iVar2 = *(int *)(uVar10 + 0xa0);
            uVar11 = uVar13 + 1;
            *(int *)(iVar2 + 8 + iVar3) = (int)lVar15;
            *(int *)(iVar2 + 0xc + iVar3) = (int)((ulonglong)lVar15 >> 0x20);
            iVar2 = *(int *)(uVar10 + 0xa0);
            uVar9 = *(uint *)(iVar2 + 8 + iVar3);
            uVar8 = uVar9 + *(uint *)(iVar2 + iVar3);
            iStack_14 = *(int *)(iVar2 + 0xc + iVar3) + *(int *)(iVar2 + 4 + iVar3) +
                        (uint)CARRY4(uVar9,*(uint *)(iVar2 + iVar3));
            if (*(uint *)(uVar10 + 0x90) <= uVar11) {
              puVar4 = (uint *)(uVar13 * 0x18 + iVar2);
              local_10 = param_2;
              iVar3 = iStack_14 + param_3 + (uint)CARRY4(uVar8,param_2);
              local_20 = param_3;
              if (((int)puVar4[1] < iVar3) ||
                 (((int)puVar4[1] <= iVar3 && (*puVar4 <= uVar8 + param_2)))) goto LAB_00488c80;
              uVar11 = puVar4[2];
              uVar9 = puVar4[3];
              goto LAB_00488c10;
            }
            iVar3 = iVar3 + 0x18;
            *(uint *)(iVar2 + iVar3) = uVar8;
            *(int *)(iVar2 + 4 + iVar3) = iStack_14;
            iVar2 = FUN_00489460((int)param_1,uVar11);
            uVar13 = uVar11;
            if (iVar2 != 0) {
              return (longlong)iVar2;
            }
          }
          goto LAB_00488ee7;
        }
        goto LAB_00488f09;
      }
      bVar14 = CARRY4(param_2,*param_1);
      param_2 = param_2 + *param_1;
      local_18 = param_3 + param_1[1] + (uint)bVar14;
    }
    iVar3 = *(int *)(uVar10 + 0xa0);
    uVar13 = 0;
    if (-1 < *(int *)(iVar3 + 4)) {
      iVar2 = 0;
      while (uVar11 = *(uint *)(iVar2 + 8 + iVar3), -1 < *(int *)(iVar2 + 0xc + iVar3)) {
        iVar5 = uVar11 + *(uint *)(iVar2 + iVar3);
        iVar12 = *(int *)(iVar2 + 4 + iVar3) + *(int *)(iVar2 + 0xc + iVar3) +
                 (uint)CARRY4(uVar11,*(uint *)(iVar2 + iVar3));
        iVar2 = iVar12 - (uint)(iVar5 == 0);
        if ((local_18 < iVar2) ||
           (((local_18 <= iVar2 && (param_2 < iVar5 - 1U)) ||
            (uVar11 = uVar13 + 1, *(uint *)(uVar10 + 0x90) <= uVar11)))) break;
        iVar2 = uVar11 * 0x18;
        *(int *)(iVar2 + iVar3) = iVar5;
        *(int *)(iVar2 + 4 + iVar3) = iVar12;
        iVar3 = *(int *)(uVar10 + 0xa0);
        iVar5 = *(int *)(iVar3 + 4 + iVar2);
        uVar13 = uVar11;
        if ((iVar5 < 1) && (iVar5 < 0)) break;
      }
    }
    iVar3 = FUN_00489460((int)param_1,uVar13);
    iVar2 = iVar3 >> 0x1f;
    if (iVar3 == 0) {
      iVar3 = uVar13 * 0x18;
      while( true ) {
        uVar11 = param_1[4];
        if (*(code **)(uVar11 + 0x84) == (code *)0x0) break;
        lVar15 = (**(code **)(uVar11 + 0x84))(uVar11,param_1[6],0,0,2);
        if (lVar15 < 0) {
          return lVar15;
        }
        iVar2 = *(int *)(uVar10 + 0xa0);
        *(int *)(iVar2 + 8 + iVar3) = (int)lVar15;
        *(int *)(iVar2 + 0xc + iVar3) = (int)((ulonglong)lVar15 >> 0x20);
        iVar2 = *(int *)(uVar10 + 0xa0);
        uVar9 = *(uint *)(iVar2 + iVar3);
        iVar12 = *(int *)(iVar2 + 0xc + iVar3);
        uVar11 = *(uint *)(iVar2 + 8 + iVar3);
        iVar5 = uVar11 + uVar9;
        iVar7 = *(int *)(iVar2 + 0xc + iVar3) + *(int *)(iVar2 + 4 + iVar3) +
                (uint)CARRY4(uVar11,uVar9);
        iVar6 = iVar7 - (uint)(iVar5 == 0);
        if (((local_18 < iVar6) || ((local_18 <= iVar6 && (param_2 < iVar5 - 1U)))) ||
           (uVar11 = uVar13 + 1, *(uint *)(uVar10 + 0x90) <= uVar11)) {
          uVar11 = param_2 - uVar9;
          iVar5 = (local_18 - *(int *)(iVar2 + 4 + iVar3)) - (uint)(param_2 < uVar9);
          if (((iVar5 < 0) || (iVar12 < iVar5)) ||
             ((iVar12 <= iVar5 && (*(uint *)(iVar2 + 8 + iVar3) < uVar11)))) goto LAB_00488f09;
          goto LAB_00488e91;
        }
        iVar3 = iVar3 + 0x18;
        *(int *)(iVar2 + iVar3) = iVar5;
        *(int *)(iVar2 + 4 + iVar3) = iVar7;
        iVar2 = FUN_00489460((int)param_1,uVar11);
        uVar13 = uVar11;
        if (iVar2 != 0) {
          return (longlong)iVar2;
        }
      }
LAB_00488ee7:
      FUN_00487380(uVar11,0xffffffff,0x5278a4);
      return -0x19;
    }
  }
  else {
LAB_00488f09:
    iVar3 = -0x1e;
    iVar2 = -1;
  }
LAB_00488f11:
  return CONCAT44(iVar2,iVar3);
LAB_00488c10:
  bVar14 = CARRY4(param_2,uVar11);
  param_2 = param_2 + uVar11;
  param_3 = param_3 + uVar9 + (uint)bVar14;
  local_20 = param_3;
  local_10 = param_2;
  if (uVar13 == 0) goto LAB_00488c80;
  uVar13 = uVar13 - 1;
  uVar11 = *(uint *)(iVar2 + 8 + uVar13 * 0x18);
  uVar1 = *(uint *)(iVar2 + uVar13 * 0x18);
  uVar9 = *(uint *)(iVar2 + 0xc + uVar13 * 0x18);
  iVar3 = *(int *)(iVar2 + 4 + uVar13 * 0x18);
  uVar8 = uVar1 + uVar11;
  iStack_14 = iVar3 + uVar9 + (uint)CARRY4(uVar1,uVar11);
  iVar5 = iStack_14 + param_3 + (uint)CARRY4(uVar8,param_2);
  if ((iVar3 <= iVar5) && ((iVar3 < iVar5 || (uVar1 <= uVar8 + param_2)))) goto LAB_00488c80;
  goto LAB_00488c10;
LAB_00488c80:
  puVar4 = (uint *)(iVar2 + uVar13 * 0x18);
  uVar9 = uVar8 - *puVar4;
  uVar11 = local_10 + uVar9;
  iVar5 = local_20 + ((iStack_14 - *(int *)(iVar2 + 4 + uVar13 * 0x18)) - (uint)(uVar8 < *puVar4)) +
          (uint)CARRY4(local_10,uVar9);
  iVar3 = FUN_00489460((int)param_1,uVar13);
  iVar2 = iVar3 >> 0x1f;
  if (iVar3 == 0) {
LAB_00488e91:
    lVar15 = FUN_004893c0((int)param_1,uVar11,iVar5,0);
    iVar3 = (int)((ulonglong)lVar15 >> 0x20);
    if ((iVar3 != 0 && -1 < lVar15) || (-1 < lVar15)) {
      puVar4 = (uint *)(*(int *)(uVar10 + 0xa0) + uVar13 * 0x18);
      uVar11 = (uint)lVar15 + *puVar4;
      uVar10 = iVar3 + *(int *)(*(int *)(uVar10 + 0xa0) + 4 + uVar13 * 0x18) +
               (uint)CARRY4((uint)lVar15,*puVar4);
      lVar15 = CONCAT44(uVar10,uVar11);
      if (-1 < (int)uVar10) {
        param_1[0x12] = 0;
        param_1[0xe] = 0;
        param_1[0xd] = param_1[0xb];
        *param_1 = uVar11;
        param_1[1] = uVar10;
        *(undefined1 *)(param_1 + 0x13) = 0;
        lVar15 = CONCAT44(uVar10,uVar11);
      }
    }
    return lVar15;
  }
  goto LAB_00488f11;
}


