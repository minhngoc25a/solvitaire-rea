// Function: FUN_004453d0
// Entry: 004453d0
// Size: 2369 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_004453d0(uint param_1,int param_2,uint param_3,float *param_4,uint param_5,uint param_6,
            int param_7)

{
  float fVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  bool bVar8;
  float fVar9;
  char acStack_11c [256];
  uint local_1c;
  uint local_18;
  undefined8 local_14;
  char local_9;
  uint local_8;
  float *local_4;
  
  uVar6 = param_1;
  if (((param_1 == 0) || (param_3 == 0)) || (param_4 == (float *)0x0)) {
    return 0xfffffffe;
  }
  if (param_7 != 0) {
    if (param_7 == 1) {
      uVar6 = 0;
      local_8 = 0;
      if (param_3 != 0) {
        uVar5 = 0;
        do {
          if (param_2 == 0) {
            cVar2 = FUN_00448a20(0,param_3,uVar5);
            uVar6 = local_8;
          }
          else {
            cVar2 = *(char *)(uVar5 + param_2);
          }
          if (cVar2 != '\0') {
            uVar6 = uVar6 + 1;
            local_8 = uVar6;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_3);
      }
      fVar9 = DAT_0050c314 /
              (float)((double)(int)uVar6 + (double)(&DAT_0050c3d0)[-((int)uVar6 >> 0x1f)]);
      local_14 = 0;
      if ((param_6 == 0) && (param_5 == 0)) {
        return 0;
      }
      local_1c = 0;
      local_8 = 0;
      uVar6 = param_1;
      while( true ) {
        do {
          param_1 = 0;
          if (param_3 != 0) {
            do {
              if (param_2 == 0) {
                cVar2 = FUN_00448a20(0,param_3,param_1);
              }
              else {
                cVar2 = *(char *)(param_1 + param_2);
              }
              if (cVar2 != '\0') {
                *(float *)(uVar6 + param_1 * 4) = fVar9 * *param_4;
              }
              param_1 = param_1 + 1;
            } while (param_1 < param_3);
          }
          param_4 = param_4 + 1;
          uVar6 = uVar6 + param_3 * 4;
          bVar8 = 0xfffffffe < local_8;
          local_8 = local_8 + 1;
          local_1c = local_1c + bVar8;
        } while (local_1c < param_6);
        if (param_6 < local_1c) break;
        if (param_5 <= local_8) {
          return 0;
        }
      }
      return 0;
    }
    if ((param_7 == 2) && (1 < param_3)) {
      local_4 = (float *)0xffffffff;
      local_18 = 0xffffffff;
      local_1c = 0;
      do {
        if (param_2 == 0) {
          local_9 = FUN_00448a20(0,param_3,local_1c);
        }
        else {
          local_9 = *(char *)(param_2 + local_1c);
        }
        pfVar7 = (float *)local_1c;
        if (local_9 != '\v') {
          if (local_9 == '\f') {
            local_18 = local_1c;
          }
          pfVar7 = local_4;
        }
        local_4 = pfVar7;
        local_1c = local_1c + 1;
      } while (local_1c < param_3);
      uVar5 = 0;
      do {
        if (param_2 == 0) {
          cVar2 = FUN_00448a20(0,param_3,uVar5);
        }
        else {
          cVar2 = *(char *)(uVar5 + param_2);
        }
        pfVar7 = (float *)uVar5;
        if (cVar2 != '\x02') {
          if (cVar2 == '\x03') {
            local_18 = uVar5;
          }
          pfVar7 = local_4;
        }
        local_4 = pfVar7;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_3);
      if ((local_4 != (float *)0xffffffff) && (local_18 != 0xffffffff)) {
        local_14 = 0;
        if ((param_6 == 0) && (param_5 == 0)) {
          return 0;
        }
        local_8 = 0;
        local_1c = 0;
        while( true ) {
          do {
            uVar6 = 0;
            do {
              if (param_2 == 0) {
                cVar2 = FUN_00448a20(0,param_3,uVar6);
              }
              else {
                cVar2 = *(char *)(uVar6 + param_2);
              }
              if (cVar2 != '\0') {
                if (((float *)uVar6 == local_4) || (uVar6 == local_18)) {
                  *(float *)(param_1 + uVar6 * 4) = *param_4;
                }
                else {
                  *(undefined4 *)(param_1 + uVar6 * 4) = 0;
                }
              }
              uVar6 = uVar6 + 1;
            } while (uVar6 < param_3);
            param_4 = param_4 + 1;
            param_1 = param_1 + param_3 * 4;
            bVar8 = 0xfffffffe < local_1c;
            local_1c = local_1c + 1;
            local_8 = local_8 + bVar8;
          } while (local_8 < param_6);
          if (param_6 < local_8) break;
          if (param_5 <= local_1c) {
            return 0;
          }
        }
        return 0;
      }
    }
  }
  if (0xfe < param_3) {
    local_14 = 0;
    if ((param_6 == 0) && (param_5 == 0)) {
      return 0;
    }
    local_8 = 0;
    local_4 = (float *)0x0;
    do {
      uVar6 = 0;
      do {
        if (param_2 == 0) {
          cVar2 = FUN_00448a20(0,param_3,uVar6);
LAB_00445c9a:
          if (cVar2 != '\0') {
            *(float *)(param_1 + ((int)local_4 * param_3 + uVar6) * 4) = param_4[(int)local_4];
          }
        }
        else if (uVar6 < param_3) {
          cVar2 = *(char *)(uVar6 + param_2);
          goto LAB_00445c9a;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_3);
      bVar8 = 0xfffffffe < local_4;
      local_4 = (float *)((int)local_4 + 1);
      local_8 = local_8 + bVar8;
      if (param_6 <= local_8) {
        if (param_6 < local_8) {
          return 0;
        }
        if (param_5 <= local_4) {
          return 0;
        }
      }
    } while( true );
  }
  local_8 = 0;
  if (param_3 != 0) {
    uVar5 = 0;
    do {
      if (param_2 == 0) {
        cVar2 = FUN_00448a20(0,param_3,uVar5);
      }
      else {
        cVar2 = *(char *)(param_2 + uVar5);
      }
      acStack_11c[uVar5] = cVar2;
      if (cVar2 == '\0') {
        local_8 = 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_3);
    if (local_8 != 0) {
      local_14 = 0;
      if ((param_6 == 0) && (param_5 == 0)) {
        return 0;
      }
      local_8 = 0;
      param_1 = 0;
      while( true ) {
        do {
          uVar5 = 0;
          local_4 = param_4 + param_1;
          if (param_3 < 4) {
            goto LAB_00445955;
          }
          do {
            if (acStack_11c[uVar5] != '\0') {
              *(float *)(uVar6 + (param_1 * param_3 + uVar5) * 4) = *local_4;
            }
            if (acStack_11c[uVar5 + 1] != '\0') {
              *(float *)(uVar6 + 4 + (param_1 * param_3 + uVar5) * 4) = *local_4;
            }
            if (acStack_11c[uVar5 + 2] != '\0') {
              *(float *)(uVar6 + 8 + (param_1 * param_3 + uVar5) * 4) = *local_4;
            }
            if (acStack_11c[uVar5 + 3] != '\0') {
              *(float *)(uVar6 + 0xc + (param_1 * param_3 + uVar5) * 4) = *local_4;
            }
            uVar5 = uVar5 + 4;
          } while (uVar5 < param_3 - 3);
          for (; uVar5 < param_3; uVar5 = uVar5 + 1) {
LAB_00445955:
            if (acStack_11c[uVar5] != '\0') {
              *(float *)(uVar6 + (param_1 * param_3 + uVar5) * 4) = *local_4;
            }
          }
          bVar8 = 0xfffffffe < param_1;
          param_1 = param_1 + 1;
          local_8 = local_8 + bVar8;
        } while (local_8 < param_6);
        if (param_6 < local_8) break;
        if (param_5 <= param_1) {
          return 0;
        }
      }
      return 0;
    }
  }
  local_14._0_4_ = 0;
  local_14._4_4_ = 0;
  if (param_3 == 2) {
    uVar5 = param_5 >> 1 | param_6 << 0x1f;
    uVar6 = param_6 >> 1;
    if (((param_6 & 1) == 0 && uVar6 != 0) || (uVar5 != 0)) {
      local_8 = 0;
      do {
        do {
          fVar9 = param_4[(uint)local_14 * 2];
          fVar1 = param_4[(uint)local_14 * 2 + 1];
          uVar4 = (uint)local_14 + 1;
          pfVar7 = (float *)(param_1 + (uint)local_14 * 0x10);
          *pfVar7 = fVar9;
          pfVar7[1] = fVar9;
          pfVar7[2] = fVar1;
          pfVar7[3] = fVar1;
          local_8 = local_8 + (0xfffffffe < (uint)local_14);
          local_14._0_4_ = uVar4;
        } while (local_8 < uVar6);
      } while ((local_8 <= uVar6) && (uVar4 < uVar5));
    }
  }
  else {
    if (param_3 != 6) {
      if (param_3 == 8) {
        if ((param_6 == 0) && (param_5 == 0)) {
          return 0;
        }
        while( true ) {
          do {
            fVar9 = param_4[(uint)local_14];
            iVar3 = (uint)local_14 * 0x20;
            bVar8 = 0xfffffffe < (uint)local_14;
            local_14._0_4_ = (uint)local_14 + 1;
            local_14._4_4_ = local_14._4_4_ + bVar8;
            pfVar7 = (float *)(iVar3 + param_1);
            *pfVar7 = fVar9;
            pfVar7[1] = fVar9;
            pfVar7[2] = fVar9;
            pfVar7[3] = fVar9;
            pfVar7 = (float *)(iVar3 + 0x10 + param_1);
            *pfVar7 = fVar9;
            pfVar7[1] = fVar9;
            pfVar7[2] = fVar9;
            pfVar7[3] = fVar9;
          } while (local_14._4_4_ < param_6);
          if (param_6 < local_14._4_4_) break;
          if (param_5 <= (uint)local_14) {
            return 0;
          }
        }
        return 0;
      }
      goto LAB_00445ba0;
    }
    uVar5 = param_5 >> 1 | param_6 << 0x1f;
    uVar6 = param_6 >> 1;
    if (((param_6 & 1) == 0 && uVar6 != 0) || (uVar5 != 0)) {
      local_8 = 0;
      do {
        do {
          fVar9 = param_4[(uint)local_14 * 2];
          fVar1 = param_4[(uint)local_14 * 2 + 1];
          uVar4 = (uint)local_14 + 1;
          pfVar7 = (float *)(param_1 + (uint)local_14 * 0x30);
          *pfVar7 = fVar9;
          pfVar7[1] = fVar9;
          pfVar7[2] = fVar9;
          pfVar7[3] = fVar9;
          pfVar7 = (float *)(param_1 + 0x10 + (uint)local_14 * 0x30);
          *pfVar7 = fVar9;
          pfVar7[1] = fVar9;
          pfVar7[2] = fVar1;
          pfVar7[3] = fVar1;
          pfVar7 = (float *)(param_1 + 0x20 + (uint)local_14 * 0x30);
          *pfVar7 = fVar1;
          pfVar7[1] = fVar1;
          pfVar7[2] = fVar1;
          pfVar7[3] = fVar1;
          local_8 = local_8 + (0xfffffffe < (uint)local_14);
          local_14._0_4_ = uVar4;
        } while (local_8 < uVar6);
        if (uVar6 < local_8) goto LAB_00445a75;
      } while (uVar4 < uVar5);
      local_14._4_4_ = uVar6 << 1 | param_6 & 1;
      local_14._0_4_ = (param_5 >> 1) * 2;
      goto LAB_00445ba0;
    }
  }
LAB_00445a75:
  local_14._4_4_ = param_6 & 0xfffffffe | uVar5 >> 0x1f;
  local_14._0_4_ = uVar5 * 2;
LAB_00445ba0:
  if ((local_14._4_4_ <= param_6) &&
     ((local_4 = (float *)local_14._4_4_, local_14._4_4_ < param_6 || ((uint)local_14 < param_5))))
  {
    while( true ) {
      do {
        if (param_3 != 0) {
          fVar9 = param_4[(uint)local_14];
          pfVar7 = (float *)(param_1 + (uint)local_14 * param_3 * 4);
          for (uVar6 = param_3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pfVar7 = fVar9;
            pfVar7 = pfVar7 + 1;
          }
        }
        bVar8 = 0xfffffffe < (uint)local_14;
        local_14._0_4_ = (uint)local_14 + 1;
        local_4 = (float *)((int)local_4 + (uint)bVar8);
      } while (local_4 < param_6);
      if (param_6 < local_4) break;
      if (param_5 <= (uint)local_14) {
        return 0;
      }
    }
  }
  return 0;
}


