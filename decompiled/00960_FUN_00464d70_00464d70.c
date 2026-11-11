// Function: FUN_00464d70
// Entry: 00464d70
// Size: 1030 bytes
// Thunk: false
// External: false


int __cdecl
FUN_00464d70(uint *param_1,uint *param_2,uint param_3,undefined8 param_4,undefined4 param_5,
            uint *param_6,int param_7,int param_8,uint param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *_Dst;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  
  puVar14 = (uint *)param_4;
  puVar12 = (uint *)(param_3 + 0x50);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar3 = puVar12;
  for (puVar9 = (uint *)param_4; puVar9 != (uint *)0x0; puVar9 = (uint *)((int)puVar9 + -1)) {
    *puVar3 = 1;
    puVar3[1] = 0;
    puVar3 = puVar3 + 0x1a;
  }
  puVar3 = FUN_00463150(param_1,1);
  if (puVar3 == (uint *)0x0) {
    return -1;
  }
  puVar9 = puVar14;
  if ((char)*puVar3 == '\r') {
    puVar9 = (uint *)0x0;
    puVar3 = (uint *)0x0;
    if (puVar14 != (uint *)0x0) {
      do {
        iVar4 = FUN_004638e0(param_1,puVar12);
        if (iVar4 < 0) {
          return -1;
        }
        if (puVar12[1] != 0) {
          return -1;
        }
        if (100000000 < *puVar12) {
          return -1;
        }
        if ((uint *)0xfa0a1eff < puVar9) {
          return -1;
        }
        puVar9 = (uint *)((int)puVar9 + *puVar12);
        puVar3 = (uint *)((int)puVar3 + 1);
        puVar12 = puVar12 + 0x1a;
      } while (puVar3 < puVar14);
    }
    puVar3 = FUN_00463150(param_1,1);
    if (puVar3 == (uint *)0x0) {
      return -1;
    }
  }
  puVar3 = (uint *)(param_3 + 0x50);
  *param_2 = (uint)puVar9;
  if (puVar9 != (uint *)0x0) {
    uVar5 = FUN_0047f911((uint)puVar9,8);
    param_2[1] = uVar5;
    uVar5 = FUN_0047f911((uint)puVar9,1);
    param_2[2] = uVar5;
    uVar5 = FUN_0047f911((uint)puVar9,4);
    param_2[3] = uVar5;
    if (param_2[1] == 0) {
      return -1;
    }
    if (param_2[2] == 0) {
      return -1;
    }
    if (uVar5 == 0) {
      return -1;
    }
  }
  puVar14 = (uint *)param_2[1];
  param_3 = 0;
  if (param_9 != 0) {
    do {
      if (*puVar3 != 0 || puVar3[1] != 0) {
        param_4 = 0;
        param_4._0_4_ = (uint *)0x0;
        param_4._4_4_ = (LPVOID)0x0;
        iVar4 = (int)param_4._4_4_;
        uVar5 = (uint)(uint *)param_4;
        if ((param_2 == (uint *)0x9) &&
           ((uVar11 = 1, uVar10 = (uint)(uint *)param_4, puVar3[1] != 0 || (1 < *puVar3)))) {
          do {
            iVar6 = FUN_004638e0(param_6,puVar14);
            if (iVar6 < 0) {
              return -1;
            }
            uVar5 = uVar10 + *puVar14;
            iVar4 = iVar4 + puVar14[1] + (uint)CARRY4(uVar10,*puVar14);
            puVar14 = puVar14 + 2;
            uVar11 = uVar11 + 1;
            uVar10 = uVar5;
          } while ((puVar3[1] != 0) || (uVar11 < *puVar3));
        }
        lVar16 = FUN_00462ed0((int)(puVar3 + -0x14));
        *(longlong *)puVar14 = lVar16 - CONCAT44(iVar4,uVar5);
        puVar14 = puVar14 + 2;
      }
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 0x1a;
      puVar9 = param_1;
    } while (param_3 < param_9);
  }
  if (param_2 == (uint *)0x9) {
    puVar3 = FUN_00463150(param_6,1);
    if (puVar3 == (uint *)0x0) {
      return -1;
    }
    param_2 = (uint *)(uint)(byte)*puVar3;
  }
  puVar3 = (uint *)0x0;
  if (puVar9 != (uint *)0x0) {
    if ((uint *)0x3 < puVar9) {
      _Dst = *(undefined4 **)(param_7 + 8);
      puVar1 = (undefined4 *)(param_7 + 8);
      puVar7 = (undefined4 *)(param_7 + 0xc);
      puVar15 = (undefined4 *)*puVar7;
      puVar2 = puVar15 + ((int)puVar9 - 1);
      if (((((((undefined4 *)((int)_Dst + -1 + (int)puVar9) < puVar15) || (puVar2 < _Dst)) &&
            ((puVar1 < puVar15 || (puVar2 < puVar1)))) &&
           ((puVar7 < puVar15 || (puVar9 = param_1, puVar2 < puVar7)))) &&
          ((puVar1 < _Dst ||
           (puVar9 = param_1, (undefined4 *)((int)param_1 + -1 + (int)_Dst) < puVar1)))) &&
         (((undefined4 *)(param_7 + 0xc) < _Dst ||
          (puVar9 = param_1,
          (undefined4 *)((int)param_1 + -1 + (int)_Dst) < (undefined4 *)(param_7 + 0xc))))) {
        puVar9 = (uint *)((uint)param_1 & 0xfffffffc);
        do {
          puVar3 = puVar3 + 1;
        } while (puVar3 < puVar9);
        _memset(_Dst,0,(size_t)puVar9);
        for (; puVar9 != (uint *)0x0; puVar9 = (uint *)((int)puVar9 - 1)) {
          *puVar15 = 0;
          puVar15 = puVar15 + 1;
        }
        puVar9 = param_1;
        if (param_1 <= puVar3) goto LAB_0046504c;
      }
    }
    do {
      *(undefined1 *)((int)puVar3 + *(int *)(param_7 + 8)) = 0;
      *(undefined4 *)(*(int *)(param_7 + 0xc) + (int)puVar3 * 4) = 0;
      puVar3 = (uint *)((int)puVar3 + 1);
    } while (puVar3 < puVar9);
  }
LAB_0046504c:
  uVar5 = param_9;
  uVar10 = 0;
  if (param_9 != 0) {
    pcVar8 = (char *)(param_8 + 0x44);
    uVar11 = param_9;
    do {
      if (((*(int *)(pcVar8 + 0xc) != 1) || (*(int *)(pcVar8 + 0x10) != 0)) || (*pcVar8 == '\0')) {
        uVar10 = uVar10 + *(int *)(pcVar8 + 0xc);
      }
      pcVar8 = pcVar8 + 0x68;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (param_2 == (uint *)0xa) {
    puVar13 = *(undefined1 **)(param_7 + 8);
    puVar3 = *(uint **)(param_7 + 0xc);
    iVar6 = 0;
    param_4 = 0;
    iVar4 = FUN_00463e10(param_6,(int *)&param_4,uVar10);
    if (iVar4 < 0) {
      FUN_0047d191((uint *)param_4);
      FUN_0047d191(param_4._4_4_);
    }
    else {
      if (uVar5 != 0) {
        puVar9 = (uint *)(param_8 + 0x50);
        do {
          if (((*puVar9 == 1) && (puVar9[1] == 0)) && ((char)puVar9[-3] != '\0')) {
            *puVar13 = 1;
            puVar13 = puVar13 + 1;
            *puVar3 = puVar9[-2];
            puVar3 = puVar3 + 1;
          }
          else {
            uVar5 = 0;
            if ((puVar9[1] != 0) || (*puVar9 != 0)) {
              do {
                do {
                  uVar5 = uVar5 + 1;
                  *puVar13 = *(undefined1 *)((int)(uint *)param_4 + iVar6);
                  puVar13 = puVar13 + 1;
                  iVar4 = iVar6 * 4;
                  iVar6 = iVar6 + 1;
                  *puVar3 = *(uint *)((int)param_4._4_4_ + iVar4);
                  puVar3 = puVar3 + 1;
                } while (puVar9[1] != 0);
              } while (uVar5 < *puVar9);
            }
          }
          puVar9 = puVar9 + 0x1a;
          param_9 = param_9 - 1;
        } while (param_9 != 0);
      }
      FUN_0047d191((uint *)param_4);
      FUN_0047d191(param_4._4_4_);
      puVar3 = FUN_00463150(param_6,1);
      if (puVar3 != (uint *)0x0) {
        param_2 = (uint *)(uint)(byte)*puVar3;
        goto LAB_0046516a;
      }
    }
    return -1;
  }
LAB_0046516a:
  return -(uint)(param_2 != (uint *)0x0);
}


