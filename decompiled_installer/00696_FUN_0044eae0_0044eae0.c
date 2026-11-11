// Function: FUN_0044eae0
// Entry: 0044eae0
// Size: 1195 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0044ee48) */
/* WARNING: Removing unreachable block (ram,0x0044ee23) */

ulonglong __cdecl FUN_0044eae0(uint *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_220 [460];
  int local_54;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_28;
  uint local_24;
  int local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = *param_1;
  if ((local_c != 0) && (local_18 = *param_2, local_18 != 0)) {
    uVar1 = local_c - 1;
    uVar8 = local_18 - 1;
    local_10 = uVar1;
    if (uVar8 == 0) {
      uVar8 = param_2[1];
      if (uVar8 == 1) {
        uVar1 = param_1[1];
        *param_1 = 0;
        _memcpy_s(param_1 + 1,0x1cc,local_220,0);
        return (ulonglong)uVar1;
      }
      if (uVar1 != 0) {
        local_10 = 0;
        local_8 = 0;
        uVar12 = 0;
        uVar11 = 0;
        if (uVar1 != 0xffffffff) {
          local_1c = param_1 + local_c;
          do {
            local_18 = (uint)((ulonglong)uVar12 >> 0x20);
            uVar1 = *local_1c;
            uVar11 = __aulldiv(uVar1,(uint)uVar12,uVar8,0);
            local_8 = local_10;
            local_10 = (int)uVar11;
            uVar12 = __aullrem(uVar1,(uint)uVar12,uVar8,0);
            local_1c = local_1c + -1;
            local_c = local_c - 1;
          } while (local_c != 0);
          local_c = 0;
          uVar11 = uVar12;
        }
        local_18 = (uint)((ulonglong)uVar11 >> 0x20);
        *param_1 = 0;
        _memcpy_s(param_1 + 1,0x1cc,local_220,0);
        param_1[1] = (uint)uVar11;
        param_1[2] = local_18;
        *param_1 = (local_18 != 0) + 1;
        return CONCAT44(local_8,local_10);
      }
      uVar1 = param_1[1];
      *param_1 = 0;
      _memcpy_s(param_1 + 1,0x1cc,local_220,0);
      uVar5 = uVar1 % uVar8;
      param_1[1] = uVar5;
      *param_1 = (uint)(uVar5 != 0);
      return (ulonglong)uVar1 / (ulonglong)uVar8;
    }
    if (uVar8 <= uVar1) {
      iVar6 = uVar1 - uVar8;
      if (iVar6 <= (int)uVar1) {
        puVar3 = param_1 + local_c;
        puVar7 = param_2 + local_18;
        do {
          if (*puVar7 != *puVar3) {
            if (*puVar3 <= *puVar7) goto LAB_0044ec8b;
            break;
          }
          uVar1 = uVar1 - 1;
          puVar7 = puVar7 + -1;
          puVar3 = puVar3 + -1;
        } while (iVar6 <= (int)uVar1);
      }
      iVar6 = iVar6 + 1;
LAB_0044ec8b:
      if (iVar6 != 0) {
        local_24 = param_2[local_18 - 1];
        local_34 = param_2[local_18];
        local_20 = 0x1f;
        if (local_34 != 0) {
          for (; local_34 >> local_20 == 0; local_20 = local_20 + -1) {
          }
        }
        if (local_34 == 0) {
          local_20 = 0x20;
        }
        else {
          local_20 = 0x1f - local_20;
        }
        local_30 = 0x20 - local_20;
        if (local_20 != 0) {
          local_34 = local_34 << ((byte)local_20 & 0x1f) | local_24 >> ((byte)local_30 & 0x1f);
          local_24 = local_24 << ((byte)local_20 & 0x1f);
          if (2 < local_18) {
            local_24 = local_24 | param_2[local_18 - 2] >> ((byte)local_30 & 0x1f);
          }
        }
        local_54 = iVar6 + -1;
        local_50 = 0;
        if (local_54 < 0) {
          uVar1 = 0;
          local_50 = 0;
        }
        else {
          local_3c = local_54 + local_18;
          local_40 = param_1 + iVar6;
          local_1c = param_1 + (local_3c - 1);
          uVar1 = local_50;
          do {
            local_50 = uVar1;
            if (local_10 < local_3c) {
              local_4c = 0;
            }
            else {
              local_4c = local_1c[2];
            }
            local_8 = local_1c[1];
            uVar1 = *local_1c;
            local_28 = local_4c;
            local_c = uVar1;
            if (local_20 != 0) {
              bVar2 = (byte)local_30;
              lVar13 = __allshl((byte)local_20,local_4c);
              local_28 = (uint)((ulonglong)lVar13 >> 0x20);
              local_8 = (uint)lVar13 | uVar1 >> (bVar2 & 0x1f);
              local_c = uVar1 << ((byte)local_20 & 0x1f);
              if (2 < local_3c) {
                local_c = local_c | local_1c[-1] >> ((byte)local_30 & 0x1f);
              }
            }
            uVar8 = local_34;
            local_48 = __aulldiv(local_8,local_28,local_34,0);
            local_14 = (int)(local_48 >> 0x20);
            uVar1 = (uint)local_48;
            local_38 = uVar1;
            uVar14 = __aullrem(local_8,local_28,uVar8,0);
            uVar14 = uVar14 & 0xffffffff;
            local_8 = 0;
            if (local_14 != 0) {
              lVar13 = __allmul(uVar1 + 1,local_14 + -1 + (uint)(0xfffffffe < uVar1),local_34,0);
              uVar14 = lVar13 + uVar14;
              local_8 = (uint)(uVar14 >> 0x20);
              uVar1 = 0xffffffff;
              local_38 = 0xffffffff;
              local_14 = 0;
              local_48 = 0xffffffff;
            }
            uVar5 = (uint)uVar14;
            uVar8 = local_38;
            if ((int)(uVar14 >> 0x20) == 0) {
              while( true ) {
                local_28 = local_c;
                uVar14 = __allmul(local_24,0,uVar1,local_14);
                uVar8 = uVar1;
                if (uVar14 <= CONCAT44(uVar5,local_28)) break;
                bVar10 = uVar1 != 0;
                uVar1 = uVar1 - 1;
                local_14 = local_14 + -1 + (uint)bVar10;
                bVar10 = CARRY4(uVar5,local_34);
                uVar5 = uVar5 + local_34;
                local_48 = CONCAT44(local_14,uVar1);
                uVar8 = uVar1;
                if (local_8 + bVar10 != 0) break;
                local_8 = 0;
              }
            }
            local_38 = uVar8;
            if ((local_14 != 0) || (uVar1 != 0)) {
              uVar5 = 0;
              uVar8 = 0;
              if (local_18 != 0) {
                local_8 = local_18;
                puVar3 = local_40;
                puVar7 = param_2;
                do {
                  puVar7 = puVar7 + 1;
                  lVar13 = (local_48 & 0xffffffff) * (ulonglong)*puVar7;
                  uVar1 = (uint)lVar13;
                  uVar9 = uVar5 + uVar1;
                  uVar5 = uVar8 + (int)((ulonglong)lVar13 >> 0x20) + local_48._4_4_ * *puVar7 +
                          (uint)CARRY4(uVar5,uVar1);
                  uVar8 = 0;
                  if (*puVar3 < uVar9) {
                    bVar10 = 0xfffffffe < uVar5;
                    uVar5 = uVar5 + 1;
                    uVar8 = (uint)bVar10;
                  }
                  *puVar3 = *puVar3 - uVar9;
                  puVar3 = puVar3 + 1;
                  local_8 = local_8 - 1;
                  uVar1 = local_38;
                } while (local_8 != 0);
              }
              if ((uVar8 != 0) || (local_4c < uVar5)) {
                if (local_18 != 0) {
                  uVar5 = 0;
                  puVar3 = local_40;
                  uVar8 = local_18;
                  puVar7 = param_2;
                  do {
                    puVar7 = puVar7 + 1;
                    uVar1 = *puVar3;
                    uVar9 = *puVar7;
                    uVar4 = uVar1 + *puVar7;
                    *puVar3 = uVar4 + uVar5;
                    uVar5 = (uint)CARRY4(uVar1,uVar9) + (uint)CARRY4(uVar4,uVar5);
                    uVar8 = uVar8 - 1;
                    puVar3 = puVar3 + 1;
                    uVar1 = local_38;
                  } while (uVar8 != 0);
                }
                uVar1 = uVar1 - 1;
              }
              local_10 = local_3c - 1;
            }
            local_40 = local_40 + -1;
            local_54 = local_54 + -1;
            local_3c = local_3c - 1;
            local_1c = local_1c + -1;
          } while (-1 < local_54);
        }
        uVar8 = local_10 + 1;
        if (uVar8 < *param_1) {
          puVar7 = param_1 + local_10 + 2;
          uVar5 = uVar8;
          do {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
            uVar5 = uVar5 + 1;
          } while (uVar5 < *param_1);
        }
        *param_1 = uVar8;
        while ((uVar8 != 0 && (param_1[uVar8] == 0))) {
          uVar8 = uVar8 - 1;
          *param_1 = uVar8;
        }
        return CONCAT44(local_50,uVar1);
      }
    }
  }
  return 0;
}


