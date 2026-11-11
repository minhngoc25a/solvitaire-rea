// Function: FUN_00505aa0
// Entry: 00505aa0
// Size: 1013 bytes
// Thunk: false
// External: false


void __cdecl FUN_00505aa0(int param_1,int *param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_2c;
  uint local_20;
  uint local_1c;
  int *local_18;
  ushort *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  int *local_4;
  
  piVar1 = param_2;
  uVar12 = param_2[0x12];
  if (param_2[6] == 0) {
    local_c = FUN_00509370(param_2,(int *)&local_20,param_1 + 0x204);
  }
  else {
    local_20 = *(uint *)(param_1 + 0xa94);
    local_c = *(uint *)(param_1 + 0xa98);
  }
  iVar11 = param_2[5];
  uVar8 = (param_2[8] - iVar11) + 1;
  local_4 = (int *)(iVar11 + *param_2);
  local_14 = (ushort *)(*param_2 + -1 + iVar11);
  if (uVar8 < 0x111) {
    if (uVar8 < 2) goto LAB_00505b1a;
  }
  else {
    uVar8 = 0x111;
  }
  local_10 = (uint)*local_14;
  local_18 = (int *)(param_1 + 500);
  local_1c = 0;
  local_8 = 0;
  local_2c = 0;
  piVar3 = local_18;
  do {
    puVar4 = (ushort *)((int)local_14 + (-1 - *piVar3));
    if (*local_14 == *puVar4) {
      uVar9 = 2;
      uVar5 = uVar8;
      if (2 < uVar8) {
        puVar2 = local_14 + 1;
        do {
          uVar10 = *(int *)puVar2 - *(int *)(((int)puVar4 - (int)local_14) + (int)puVar2);
          if (uVar10 != 0) {
            uVar6 = uVar9 + 2;
            if ((uVar10 & 0xffff) != 0) {
              uVar6 = uVar9;
            }
            uVar9 = uVar10 >> 0x10;
            if ((uVar10 & 0xffff) != 0) {
              uVar9 = uVar10;
            }
            uVar10 = uVar6 + 1;
            if ((char)uVar9 != '\0') {
              uVar10 = uVar6;
            }
            if (uVar10 < uVar8) {
              uVar5 = uVar10;
            }
            break;
          }
          uVar9 = uVar9 + 4;
          puVar2 = puVar2 + 2;
        } while (uVar9 < uVar8);
      }
      uVar9 = local_2c;
      if (uVar12 <= uVar5) goto LAB_00505c5a;
      if (local_1c < uVar5) {
        local_8 = local_2c;
        local_1c = uVar5;
      }
    }
    local_2c = local_2c + 1;
    piVar3 = piVar3 + 1;
  } while (local_2c < 4);
  if (uVar12 <= local_c) {
    *param_3 = *(int *)(param_1 + 0x200 + local_20 * 8) + 4;
    *param_4 = local_c;
    iVar11 = local_c - 1;
    if (iVar11 == 0) {
      return;
    }
    (*(code *)param_2[0xb])(param_2,iVar11);
    param_2[6] = param_2[6] + iVar11;
    return;
  }
  local_2c = 0;
  uVar12 = local_c;
  if (1 < local_c) {
    local_2c = *(uint *)(param_1 + 0x200 + local_20 * 8);
    if (1 < local_20) {
      iVar11 = param_1 + local_20 * 8;
      do {
        if ((uVar12 != *(int *)(iVar11 + 500) + 1U) ||
           (local_2c >> 7 <= *(uint *)(param_1 + 0x1f8 + local_20 * 8))) break;
        local_20 = local_20 - 1;
        iVar11 = param_1 + local_20 * 8;
        uVar12 = *(uint *)(iVar11 + 0x1fc);
        local_2c = *(uint *)(param_1 + 0x200 + local_20 * 8);
      } while (1 < local_20);
    }
    if ((uVar12 == 2) && (0x7f < local_2c)) {
      uVar12 = 1;
    }
  }
  if ((1 < local_1c) &&
     (((uVar9 = local_8, uVar5 = local_1c, uVar12 <= local_1c + 1 ||
       ((uVar12 <= local_1c + 2 && (0x200 < local_2c)))) ||
      ((uVar12 <= local_1c + 3 && (0x8000 < local_2c)))))) {
LAB_00505c5a:
    iVar11 = uVar5 - 1;
    *param_3 = uVar9;
    *param_4 = uVar5;
    if (iVar11 == 0) {
      return;
    }
    (*(code *)param_2[0xb])(param_2,iVar11);
    param_2[6] = param_2[6] + iVar11;
    return;
  }
  if ((1 < uVar12) && (2 < uVar8)) {
    uVar8 = FUN_00509370(param_2,(int *)(param_1 + 0xa94),param_1 + 0x204);
    *(uint *)(param_1 + 0xa98) = uVar8;
    if ((uVar8 < 2) ||
       (((((uVar5 = *(uint *)(param_1 + 0x200 + *(int *)(param_1 + 0xa94) * 8), uVar8 < uVar12 ||
           (local_2c <= uVar5)) && ((uVar8 != uVar12 + 1 || (local_2c < uVar5 >> 7)))) &&
         (uVar8 <= uVar12 + 1)) &&
        (((uVar8 + 1 < uVar12 || (uVar12 < 3)) || (local_2c >> 7 <= uVar5)))))) {
      local_8 = uVar12 - 1;
      param_2 = (int *)0x0;
      if (local_8 < 2) {
        local_8 = 2;
      }
      while( true ) {
        piVar3 = (int *)((int)local_4 + (-1 - *local_18));
        piVar7 = local_4;
        uVar8 = local_8;
        while (uVar5 = uVar8 - 4, 3 < uVar8) {
          if (*piVar7 != *piVar3) goto LAB_00505e10;
          piVar7 = piVar7 + 1;
          piVar3 = piVar3 + 1;
          uVar8 = uVar5;
        }
        if (uVar5 == 0xfffffffc) break;
LAB_00505e10:
        if (((char)*piVar7 == (char)*piVar3) &&
           ((uVar5 == 0xfffffffd ||
            ((*(char *)((int)piVar7 + 1) == *(char *)((int)piVar3 + 1) &&
             ((uVar5 == 0xfffffffe ||
              ((*(char *)((int)piVar7 + 2) == *(char *)((int)piVar3 + 2) &&
               ((uVar5 == 0xffffffff || (*(char *)((int)piVar7 + 3) == *(char *)((int)piVar3 + 3))))
               ))))))))) break;
        local_18 = local_18 + 1;
        param_2 = (int *)((int)param_2 + 1);
        if ((int *)0x3 < param_2) {
          *param_3 = local_2c + 4;
          *param_4 = uVar12;
          iVar11 = uVar12 - 2;
          if (iVar11 == 0) {
            return;
          }
          (*(code *)piVar1[0xb])(piVar1,iVar11);
          piVar1[6] = piVar1[6] + iVar11;
          return;
        }
      }
    }
  }
LAB_00505b1a:
  *param_3 = 0xffffffff;
  *param_4 = 1;
  return;
}


