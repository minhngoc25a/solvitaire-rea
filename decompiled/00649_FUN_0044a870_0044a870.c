// Function: FUN_0044a870
// Entry: 0044a870
// Size: 1610 bytes
// Thunk: false
// External: false


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __cdecl FUN_0044a870(int param_1,int *param_2,int *param_3,int *param_4,uint *param_5)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_1058;
  longlong *local_1050;
  float *local_104c;
  int local_1048;
  uint local_1044;
  float *local_1040;
  uint local_103c;
  uint local_1038;
  int local_1034;
  uint local_1030;
  uint local_102c;
  uint local_1028 [2];
  float local_1020;
  int local_101c;
  uint local_1018;
  uint local_1014;
  uint local_1010;
  undefined8 local_100c;
  float local_1004;
  float local_1000 [1023];
  undefined4 uStack_4;
  
  uStack_4 = 0x44a87a;
  local_101c = *param_3;
  local_102c = *param_5;
  if ((uint *)(param_1 + 0x1a0) == (uint *)0x0) {
    uVar7 = 0;
    local_1044 = 0;
  }
  else {
    local_1044 = *(uint *)(param_1 + 0x1a0);
    uVar7 = *(uint *)(param_1 + 0x1a4);
  }
  local_1050 = (longlong *)(param_1 + 0x2a0);
  local_1034 = 0;
  local_103c = 0;
  local_1030 = 0;
  local_1038 = 0;
  LOCK();
  lVar3 = *local_1050;
  if (lVar3 == 0) {
    *local_1050 = 0;
  }
  else {
    local_1038 = (uint)((ulonglong)lVar3 >> 0x20);
    local_103c = (uint)lVar3;
  }
  UNLOCK();
  if ((local_103c & local_1038) != 0xffffffff) {
    LOCK();
    local_104c = *(float **)(param_1 + 0x298);
    if (local_104c == (float *)0x0) {
      *(float *)(param_1 + 0x298) = 0.0;
      local_104c = (float *)0.0;
    }
    UNLOCK();
    LOCK();
    local_1040 = *(float **)(param_1 + 0x29c);
    if (local_1040 == (float *)0x0) {
      *(int *)(param_1 + 0x29c) = 0;
      local_1040 = (float *)0;
    }
    UNLOCK();
    uVar8 = 0;
    uVar12 = 0;
    LOCK();
    lVar3 = *(longlong *)(param_1 + 0x2a8);
    if (lVar3 == 0) {
      *(longlong *)(param_1 + 0x2a8) = 0;
    }
    else {
      uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar8 = (uint)lVar3;
    }
    UNLOCK();
    if ((uVar8 & uVar12) == 0xffffffff) {
      local_1058 = 0;
      local_1058._4_4_ = 0;
      local_1058._0_4_ = 0;
      iVar11 = local_1058._4_4_;
      uVar16 = (uint)local_1058;
    }
    else {
      iVar11 = *(int *)(param_1 + 0x100);
      if (iVar11 == 0) {
        local_1058 = 0;
        local_1058._4_4_ = 0;
        local_1058._0_4_ = 0;
        uVar9 = (uint)local_1058;
        iVar13 = local_1058._4_4_;
      }
      else if (iVar11 == -0x100) {
        local_1058 = 0;
        local_1058._4_4_ = 0;
        local_1058._0_4_ = 0;
        uVar9 = (uint)local_1058;
        iVar13 = local_1058._4_4_;
      }
      else {
        uVar9 = 0;
        iVar13 = 0;
        LOCK();
        lVar3 = *(longlong *)(iVar11 + 0x128);
        if (lVar3 == 0) {
          *(longlong *)(iVar11 + 0x128) = 0;
        }
        else {
          iVar13 = (int)((ulonglong)lVar3 >> 0x20);
          uVar9 = (uint)lVar3;
        }
        UNLOCK();
      }
      uVar16 = uVar8 - uVar9;
      iVar11 = (uVar12 - iVar13) - (uint)(uVar8 < uVar9);
    }
    FUN_00429980(param_1 + 0x110,(float)local_104c,local_1040,local_103c,local_1038,uVar16,iVar11);
    do {
      lVar6 = *local_1050;
      LOCK();
      lVar3 = *local_1050;
      if (*local_1050 == lVar3) {
        *local_1050 = -1;
        iVar11 = (int)lVar6;
        iVar13 = *(int *)((int)local_1050 + 4);
      }
      else {
        iVar11 = (int)lVar3;
        iVar13 = (int)((ulonglong)lVar3 >> 0x20);
      }
      UNLOCK();
    } while ((iVar11 != (int)lVar6) || (iVar13 != *(int *)((int)local_1050 + 4)));
  }
  iVar11 = 0;
  if (param_1 == 0) {
    FID_conflict___assert
              (L"pEngineNode != ((void *)0)",
               L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h",
               0x1214b);
  }
  LOCK();
  iVar13 = *(int *)(param_1 + 0x288);
  if (iVar13 == 0) {
    *(int *)(param_1 + 0x288) = 0;
    iVar13 = 0;
  }
  UNLOCK();
  local_1014 = (uint)(iVar13 == 0);
  if ((*(float *)(param_1 + 0x11c) != DAT_0050c314) ||
     (local_1038 = 0, *(float *)(param_1 + 0x120) != DAT_0050c314)) {
    local_1038 = 1;
  }
  LOCK();
  iVar13 = *(int *)(param_1 + 0x28c);
  if (iVar13 == 0) {
    *(int *)(param_1 + 0x28c) = 0;
    iVar13 = 0;
  }
  UNLOCK();
  local_1010 = (uint)(iVar13 == 0);
  if ((*(float *)(param_1 + 0x254) == 0.0) || (local_1048 = 1, uVar7 == 1)) {
    local_1048 = 0;
  }
  local_103c = *(int *)(param_1 + 0x108);
  if (local_102c == 0) {
    *param_3 = 0;
    *param_5 = 0;
    return;
  }
  local_1018 = (uint)(0x400 / (ulonglong)local_1044);
  uVar8 = 0;
  do {
    uVar8 = local_102c - uVar8;
    uVar12 = local_101c - iVar11;
    local_1050 = (longlong *)0x0;
    local_1040 = (float *)(*param_2 + local_1044 * iVar11 * 4);
    local_104c = (float *)(*param_4 + uVar7 * local_1030 * 4);
    pfVar14 = local_104c;
    if ((local_1044 != uVar7) && (pfVar14 = local_1000, local_1018 < uVar8)) {
      uVar8 = local_1018;
    }
    if (local_1014 == 0) {
      bVar5 = false;
      uVar9 = uVar8;
      if (uVar12 < uVar8) {
        uVar8 = uVar12;
        uVar9 = uVar12;
      }
    }
    else {
      piVar1 = (int *)(param_1 + 0x138);
      local_1028[1] = 0;
      local_1058 = (ulonglong)uVar8;
      local_1028[0] = uVar12;
      if (piVar1 == (int *)0x0) {
LAB_0044ac3b:
        bVar5 = true;
        local_1050 = (longlong *)0x1;
        uVar8 = local_1028[0];
        uVar9 = (uint)local_1058;
      }
      else if (*piVar1 == 2) {
        if (*(uint *)(param_1 + 0x144) < *(uint *)(param_1 + 0x140)) {
          FUN_00443f40((int)piVar1,(int)local_1040,local_1028,(uint)pfVar14,(uint *)&local_1058);
          bVar5 = true;
          local_1050 = (longlong *)0x1;
          uVar8 = local_1028[0];
          uVar9 = (uint)local_1058;
        }
        else {
          FUN_00444370((int)piVar1,(int)local_1040,local_1028,(uint *)pfVar14,(uint *)&local_1058);
          bVar5 = true;
          local_1050 = (longlong *)0x1;
          uVar8 = local_1028[0];
          uVar9 = (uint)local_1058;
        }
      }
      else {
        if (*piVar1 != 5) {
          FID_conflict___assert
                    (L"0",
                     L"C:\\PureBasic\\Svn\\v6.20\\Libraries\\Sound\\MiniAudio\\miniaudio\\miniaudio.h"
                     ,0xc9ee);
          goto LAB_0044ac3b;
        }
        if (*(uint *)(param_1 + 0x144) < *(uint *)(param_1 + 0x140)) {
          FUN_00444790((int)piVar1,(int)local_1040,local_1028,(int)pfVar14,(uint *)&local_1058);
          bVar5 = true;
          local_1050 = (longlong *)0x1;
          uVar8 = local_1028[0];
          uVar9 = (uint)local_1058;
        }
        else {
          FUN_00444b40((int)piVar1,(int)local_1040,local_1028,(uint *)pfVar14,(uint *)&local_1058);
          bVar5 = true;
          local_1050 = (longlong *)0x1;
          uVar8 = local_1028[0];
          uVar9 = (uint)local_1058;
        }
      }
    }
    plVar10 = local_1050;
    if (local_1038 != 0) {
      if (bVar5) {
        FUN_004295a0((int *)(param_1 + 0x110),(uint *)pfVar14,(uint *)pfVar14,uVar9,0);
        plVar10 = local_1050;
      }
      else {
        FUN_004295a0((int *)(param_1 + 0x110),(uint *)pfVar14,(uint *)local_1040,uVar9,0);
        plVar10 = (longlong *)1;
      }
    }
    if (local_103c == 0) {
      if (plVar10 == (longlong *)0x0) {
        pfVar14 = local_1040;
      }
    }
    else {
      puVar2 = (uint *)(param_1 + 600);
      if (plVar10 == (longlong *)0x0) {
        if (puVar2 != (uint *)0x0) {
          FUN_004421f0(puVar2,(int)pfVar14,(int)local_1040,uVar9,0);
        }
      }
      else if (puVar2 != (uint *)0x0) {
        FUN_004421f0(puVar2,(int)pfVar14,(int)pfVar14,uVar9,0);
      }
    }
    pfVar15 = local_104c;
    if (local_1010 == 0) {
      LOCK();
      local_1020 = *(float *)(param_1 + 0x278);
      if (local_1020 == 0.0) {
        *(float *)(param_1 + 0x278) = 0.0;
        local_1020 = 0.0;
      }
      UNLOCK();
      if (local_1044 == uVar7) {
        if (local_103c == 0) {
LAB_0044ae3a:
          FUN_00432590((int)pfVar15,(int)pfVar14,uVar7 * uVar9,0,local_1020);
        }
        else {
          FUN_00431ec0((uint *)local_104c,(uint *)pfVar14,uVar7 * uVar9,0,5,uVar7);
        }
      }
      else {
        FUN_00442af0(local_104c,(char *)0x0,uVar7,pfVar14,(char *)0x0,local_1044,uVar9,0,1,
                     *(int *)(param_1 + 0x10c));
        pfVar14 = pfVar15;
        if (local_103c == 0) goto LAB_0044ae3a;
      }
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x290);
      if (((uVar12 == 0xff) || (*(int *)(param_1 + 0x100) == 0)) ||
         (*(uint *)(*(int *)(param_1 + 0x100) + 0x214) <= uVar12)) {
        if (param_1 == -0x1a0) {
          fVar19 = 0.0;
          fVar18 = 0.0;
          fVar17 = 0.0;
        }
        else {
          FUN_0042fa20((int *)(param_1 + 0x1f0));
          uVar4 = *(undefined8 *)(param_1 + 0x1e4);
          fVar19 = *(float *)(param_1 + 0x1ec);
          if ((undefined4 *)(param_1 + 0x1f0) != (undefined4 *)0x0) {
            LOCK();
            *(undefined4 *)(param_1 + 0x1f0) = 0;
            UNLOCK();
          }
          local_100c._0_4_ = (float)uVar4;
          local_100c._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          fVar18 = local_100c._4_4_;
          fVar17 = (float)local_100c;
          local_100c = uVar4;
          local_1004 = fVar19;
        }
        uVar12 = FUN_00434d20(*(int *)(param_1 + 0x100),fVar17,fVar18,fVar19);
      }
      pfVar15 = local_104c;
      FUN_00429ee0((uint *)(param_1 + 0x1a0),*(int *)(param_1 + 0x100) + uVar12 * 100 + 0x218,
                   local_104c,pfVar14,uVar9,0);
    }
    if (local_1048 != 0) {
      FUN_00429290((int *)(param_1 + 0x248),(uint *)pfVar15,(uint *)pfVar15,uVar9,0);
    }
    iVar11 = local_1034 + uVar8;
    uVar8 = local_1030 + uVar9;
    if ((uVar9 == 0) || (local_1034 = iVar11, local_1030 = uVar8, local_102c <= uVar8)) {
      *param_3 = iVar11;
      *param_5 = uVar8;
      return;
    }
  } while( true );
}


