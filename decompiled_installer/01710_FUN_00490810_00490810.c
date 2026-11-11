// Function: FUN_00490810
// Entry: 00490810
// Size: 2513 bytes
// Thunk: false
// External: false


/* WARNING: Type propagation algorithm not settling */

undefined4 __cdecl FUN_00490810(int *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  code *local_98;
  int local_94;
  uint *local_8c;
  int local_88;
  uint *local_84;
  uint local_80;
  uint *local_7c;
  uint *local_78;
  int local_74;
  undefined1 *local_70;
  code *local_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  uint local_5c;
  uint *local_58 [2];
  uint local_50 [20];
  
  uVar4 = *(uint *)(param_4 + 0x18);
  local_58[1] = (uint *)0x0;
  local_74 = 1;
  local_94 = 1;
  if ((uVar4 & 0x400) == 0) {
    if ((uVar4 & 0x1000) != 0) {
      local_74 = 2;
      local_98 = (code *)&LAB_0048f3b0;
      local_94 = 2;
      local_80 = ~(uVar4 >> 0xd) & 1;
      goto LAB_0049088f;
    }
    if ((uVar4 & 0x100) != 0) {
      local_98 = FUN_0048f180;
      local_80 = ~(uVar4 >> 9) & 1;
      goto LAB_0049088f;
    }
    local_80 = 0;
    if ((uVar4 & 0x800) != 0) {
      local_98 = FUN_0048f330;
      local_94 = 2;
      local_74 = 2;
      goto LAB_004908e8;
    }
    if ((uVar4 & 0x2000) == 0) {
      local_98 = FUN_0048f180;
      local_74 = 1;
      goto LAB_00490947;
    }
    local_98 = (code *)&LAB_0048f3b0;
    local_74 = 2;
  }
  else {
    local_74 = 2;
    local_98 = FUN_0048f330;
    local_94 = 2;
    local_80 = ~(uVar4 >> 0xb) & 1;
LAB_0049088f:
    if ((uVar4 & 0x800) != 0) {
LAB_004908e8:
      local_6c = (code *)&LAB_004918c0;
      local_88 = 1;
      local_64 = (uint *)0x4;
      goto LAB_0049095d;
    }
    if ((uVar4 & 0x2000) == 0) {
LAB_00490947:
      local_6c = FUN_0048f0c0;
      local_64 = (uint *)0x6;
      local_94 = local_74;
      local_88 = local_74;
      goto LAB_0049095d;
    }
  }
  local_6c = FUN_004918e0;
  local_88 = 1;
  local_64 = (uint *)0x4;
  local_94 = local_74;
LAB_0049095d:
  iVar5 = local_74;
  piVar2 = FUN_0048d4d0(param_1,(LPVOID)(local_88 * param_3 + param_1[1] + local_74));
  if (piVar2 == (int *)0x0) {
    return 0xffffffff;
  }
  puVar9 = (undefined1 *)(param_1[1] + *param_1);
  puVar8 = (undefined1 *)((param_1[2] - iVar5) + *param_1);
  puVar3 = (uint *)(*local_6c)(&local_8c,param_2,param_3);
  do {
    while( true ) {
      local_78 = puVar3;
      if (local_78 == (uint *)0x0) {
        param_1[1] = (int)puVar9 - *param_1;
        *puVar9 = 0;
        if (local_74 == 2) {
          *(undefined1 *)(param_1[1] + 1 + *param_1) = 0;
        }
        return local_58[1];
      }
      if (-1 < (int)local_78) break;
      iVar10 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
      if (iVar10 == 0) {
        iVar7 = local_88 * param_3;
        do {
          param_1[1] = (int)puVar9 - *param_1;
          piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar7 + iVar5));
          if (piVar2 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar8 = (undefined1 *)((param_1[2] - iVar5) + *param_1);
          puVar9 = (undefined1 *)(param_1[1] + *param_1);
          iVar10 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
        } while (iVar10 == 0);
      }
      puVar9 = puVar9 + iVar10;
      param_2 = (undefined1 *)((int)param_2 - (int)local_78);
      param_3 = param_3 + (int)local_78;
      local_58[1] = (uint *)0xffffffff;
switchD_00491147_default:
      puVar3 = (uint *)(*local_6c)(&local_8c,param_2,param_3);
      iVar5 = local_94;
    }
    if ((local_78 == local_64) || (local_70 = param_2, local_80 != 0)) {
      local_70 = (undefined1 *)0x0;
    }
    param_2 = (undefined1 *)((int)param_2 + (int)local_78);
    param_3 = param_3 - (int)local_78;
    local_84 = (uint *)((int)local_8c + 0xffff5400);
    if ((-1 < (int)local_84) && ((int)local_84 < 0x2ba4)) {
      local_60 = (uint *)(((int)local_84 % 0x24c) / 0x1c + 0x1161);
      local_8c = (uint *)((int)local_84 / 0x24c + 0x1100);
      local_84 = (uint *)((int)local_84 % 0x1c + 0x11a7);
      iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
      if (iVar5 == 0) {
        iVar10 = local_88 * param_3;
        do {
          param_1[1] = (int)puVar9 - *param_1;
          piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar10 + local_94));
          if (piVar2 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
          puVar9 = (undefined1 *)(param_1[1] + *param_1);
          iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
        } while (iVar5 == 0);
      }
      puVar9 = puVar9 + iVar5;
      local_8c = local_60;
      iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_60);
      if (iVar5 == 0) {
        iVar10 = local_88 * param_3;
        do {
          param_1[1] = (int)puVar9 - *param_1;
          piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar10 + local_94));
          if (piVar2 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
          puVar9 = (undefined1 *)(param_1[1] + *param_1);
          iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
        } while (iVar5 == 0);
      }
      puVar9 = puVar9 + iVar5;
      if (local_84 != (uint *)0x11a7) {
        local_8c = local_84;
        iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_84);
        if (iVar5 == 0) {
          iVar10 = local_88 * param_3;
          do {
            param_1[1] = (int)puVar9 - *param_1;
            piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar10 + local_94));
            if (piVar2 == (int *)0x0) {
              return 0xffffffff;
            }
            puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
            puVar9 = (undefined1 *)(param_1[1] + *param_1);
            iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
          } while (iVar5 == 0);
        }
LAB_00491093:
        puVar9 = puVar9 + iVar5;
      }
      goto switchD_00491147_default;
    }
    uVar4 = (uint)local_8c >> 8;
    if ((uVar4 < 0x1d3) &&
       ((((&DAT_00514ea0)[uVar4] != '\0' && (local_8c < (uint *)0x1d245)) &&
        ((&DAT_00515078)
         [(uint)(byte)(&DAT_005157a8)
                      [(uint)(byte)(&DAT_00515a18)[uVar4] * 0x10 + ((uint)local_8c >> 4 & 0xf)] *
          0x10 + ((uint)local_8c & 0xf)] != '\0')))) {
      if (local_70 == (undefined1 *)0x0) {
        iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
        if (iVar5 == 0) {
          iVar10 = local_88 * param_3;
          do {
            param_1[1] = (int)puVar9 - *param_1;
            piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar10 + local_94));
            if (piVar2 == (int *)0x0) {
              return 0xffffffff;
            }
            puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
            puVar9 = (undefined1 *)(param_1[1] + *param_1);
            iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
          } while (iVar5 == 0);
        }
        goto LAB_00491093;
      }
      if (puVar8 < (undefined1 *)((int)puVar9 + (int)local_78)) {
        param_1[1] = (int)puVar9 - *param_1;
        piVar2 = FUN_0048d4d0(param_1,(LPVOID)(local_88 * param_3 + param_1[2] + local_94));
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar9 = (undefined1 *)(param_1[1] + *param_1);
        puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
      }
      puVar6 = local_70;
      switch(local_78) {
      case (uint *)0x4:
        *puVar9 = *local_70;
        puVar9 = puVar9 + 1;
        puVar6 = local_70 + 1;
      case (uint *)0x3:
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      case (uint *)0x2:
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      case (uint *)0x1:
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
      }
      goto switchD_00491147_default;
    }
    iVar5 = FUN_00491960(local_58,&local_5c,(uint)local_8c);
    puVar3 = local_8c;
    local_8c = local_58[0];
    for (iVar10 = 0; (local_58[0] = local_8c, iVar5 != 0 && (iVar5 = iVar10, iVar10 < 10));
        iVar10 = iVar10 + 1) {
      for (; 0 < iVar5; iVar5 = iVar5 + -1) {
        puVar3 = local_58[iVar5 * 2 + 1];
        local_50[iVar5 * 2] = (uint)local_58[iVar5 * 2];
        local_50[iVar5 * 2U + 1] = (uint)puVar3;
      }
      if (local_5c < 0x1d245) {
        local_50[1] = (uint)(byte)(&DAT_00515078)
                                  [(uint)(byte)(&DAT_005157a8)
                                               [(uint)(byte)(&DAT_00515a18)[local_5c >> 8] * 0x10 +
                                                (local_5c >> 4 & 0xf)] * 0x10 + (local_5c & 0xf)];
      }
      else {
        local_50[1] = 0;
      }
      local_70 = (undefined1 *)0x0;
      iVar5 = FUN_00491960(local_58,&local_5c,(uint)local_8c);
      puVar3 = local_8c;
      local_8c = local_58[0];
    }
    local_8c = puVar3;
    local_84 = (uint *)(*local_6c)(&local_7c,param_2,param_3);
joined_r0x00490b49:
    if (((0 < (int)local_84) && (local_68 = local_7c, local_7c < (uint *)0x1d245)) &&
       ((puVar3 = (uint *)(uint)(byte)(&DAT_00515078)
                                      [(uint)(byte)(&DAT_005157a8)
                                                   [(uint)(byte)(&DAT_00515a18)[(uint)local_7c >> 8]
                                                    * 0x10 + ((uint)local_7c >> 4 & 0xf)] * 0x10 +
                                       ((uint)local_7c & 0xf)], puVar3 != (uint *)0x0 &&
        (iVar10 < 10)))) {
      iVar5 = 0;
      param_2 = param_2 + (int)local_84;
      param_3 = param_3 - (int)local_84;
      if (0 < iVar10) {
        do {
          local_60 = local_50 + iVar5 * 2U + 1;
          local_84 = puVar3;
          if ((int)puVar3 < (int)*local_60) {
            iVar7 = iVar10;
            if (iVar5 < iVar10) goto LAB_00490c90;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar10);
      }
      local_50[iVar10 * 2U + 1] = (uint)puVar3;
      local_50[iVar10 * 2] = (uint)local_7c;
      goto LAB_00490bec;
    }
    if (local_70 == (undefined1 *)0x0) {
      iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
      if (iVar5 == 0) {
        iVar7 = local_88 * param_3;
        do {
          param_1[1] = (int)puVar9 - *param_1;
          piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar7 + local_94));
          if (piVar2 == (int *)0x0) {
            return 0xffffffff;
          }
          puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
          puVar9 = (undefined1 *)(param_1[1] + *param_1);
          iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
        } while (iVar5 == 0);
      }
      puVar9 = puVar9 + iVar5;
    }
    else {
      if (puVar8 < (undefined1 *)((int)local_78 + (int)puVar9)) {
        param_1[1] = (int)puVar9 - *param_1;
        piVar2 = FUN_0048d4d0(param_1,(LPVOID)(local_88 * param_3 + param_1[2] + local_94));
        if (piVar2 == (int *)0x0) {
          return 0xffffffff;
        }
        puVar9 = (undefined1 *)(param_1[1] + *param_1);
        puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
      }
      puVar6 = local_70;
      switch(local_78) {
      case (uint *)0x4:
        *puVar9 = *local_70;
        puVar9 = puVar9 + 1;
        puVar6 = local_70 + 1;
      case (uint *)0x3:
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      case (uint *)0x2:
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
        puVar6 = puVar6 + 1;
      case (uint *)0x1:
        *puVar9 = *puVar6;
        puVar9 = puVar9 + 1;
      }
    }
    local_68 = (uint *)0x0;
    puVar3 = local_84;
    local_8c = local_7c;
    iVar5 = local_94;
    if (0 < iVar10) {
      do {
        local_8c = (uint *)local_50[(int)local_68 * 2];
        iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
        if (iVar5 == 0) {
          iVar7 = local_88 * param_3;
          do {
            param_1[1] = (int)puVar9 - *param_1;
            piVar2 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] + iVar7 + local_94));
            if (piVar2 == (int *)0x0) {
              return 0xffffffff;
            }
            puVar8 = (undefined1 *)((param_1[2] - local_94) + *param_1);
            puVar9 = (undefined1 *)(param_1[1] + *param_1);
            iVar5 = (*local_98)(puVar9,(int)puVar8 - (int)puVar9,local_8c);
          } while (iVar5 == 0);
        }
        puVar9 = puVar9 + iVar5;
        local_68 = (uint *)((int)local_68 + 1);
        puVar3 = local_84;
        local_8c = local_7c;
        iVar5 = local_94;
      } while ((int)local_68 < iVar10);
    }
  } while( true );
LAB_00490c90:
  do {
    puVar1 = local_58[iVar7 * 2 + 1];
    local_50[iVar7 * 2] = (uint)local_58[iVar7 * 2];
    local_50[iVar7 * 2U + 1] = (uint)puVar1;
    iVar7 = iVar7 + -1;
  } while (iVar5 < iVar7);
  *local_60 = (uint)puVar3;
  local_50[iVar5 * 2] = (uint)local_7c;
LAB_00490bec:
  iVar10 = iVar10 + 1;
  local_84 = (uint *)(*local_6c)(&local_7c,param_2,param_3);
  goto joined_r0x00490b49;
}


