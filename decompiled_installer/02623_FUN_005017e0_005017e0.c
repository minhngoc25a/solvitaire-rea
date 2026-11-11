// Function: FUN_005017e0
// Entry: 005017e0
// Size: 931 bytes
// Thunk: false
// External: false


void __cdecl FUN_005017e0(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int local_81c;
  int local_818;
  uint local_814 [516];
  
  puVar10 = local_814;
  for (iVar5 = 0x101; puVar10 = puVar10 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
  }
  iVar5 = 0;
  if (0 < (int)param_4) {
    do {
      pbVar2 = (byte *)(param_2 + iVar5);
      iVar5 = iVar5 + 1;
      local_814[*pbVar2 + 1] = local_814[*pbVar2 + 1] + 1;
    } while (iVar5 < (int)param_4);
  }
  puVar10 = local_814;
  iVar8 = 1;
  puVar11 = local_814 + 0x103;
  for (iVar5 = 0x100; puVar10 = puVar10 + 1, iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar11 = puVar11 + 1;
  }
  do {
    uVar6 = local_814[iVar8 + 2] + local_814[iVar8] + local_814[iVar8 + 1];
    local_814[iVar8 + 1] = local_814[iVar8] + local_814[iVar8 + 1];
    uVar4 = local_814[iVar8 + 3] + uVar6;
    local_814[iVar8 + 2] = uVar6;
    local_814[iVar8 + 4] = local_814[iVar8 + 4] + uVar4;
    local_814[iVar8 + 3] = uVar4;
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x101);
  iVar5 = 0;
  if (0 < (int)param_4) {
    do {
      uVar4 = local_814[*(byte *)(param_2 + iVar5) + 1];
      local_814[*(byte *)(param_2 + iVar5) + 1] = uVar4 - 1;
      *(int *)(param_1 + (uVar4 - 1) * 4) = iVar5;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_4);
  }
  iVar5 = ((int)(param_4 + ((int)param_4 >> 0x1f & 0x1fU)) >> 5) + 2;
  puVar12 = param_3;
  if (0 < iVar5) {
    for (; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
  }
  iVar5 = 0;
  do {
    iVar8 = iVar5 + 1;
    iVar5 = iVar5 + 1;
    param_3[(int)local_814[iVar8] >> 5] =
         param_3[(int)local_814[iVar8] >> 5] | 1 << (local_814[iVar8] & 0x1f);
  } while (iVar5 < 0x100);
  iVar5 = 0x20;
  uVar4 = param_4;
  do {
    param_3[(int)uVar4 >> 5] = param_3[(int)uVar4 >> 5] | 1 << (uVar4 & 0x1f);
    uVar6 = uVar4 + 1;
    uVar4 = uVar4 + 2;
    param_3[(int)uVar6 >> 5] = param_3[(int)uVar6 >> 5] & ~(1 << (uVar6 & 0x1f));
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_81c = 1;
  do {
    uVar4 = 0;
    if (0 < (int)param_4) {
      uVar9 = 1;
      uVar6 = 0;
      do {
        uVar7 = uVar4;
        if ((param_3[uVar4 >> 5] & uVar9) == 0) {
          uVar7 = uVar6;
        }
        iVar8 = *(int *)(param_1 + uVar4 * 4) - local_81c;
        iVar5 = iVar8 + param_4;
        if (-1 < iVar8) {
          iVar5 = iVar8;
        }
        uVar4 = uVar4 + 1;
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        *(uint *)(param_2 + iVar5 * 4) = uVar7;
        uVar6 = uVar7;
      } while ((int)uVar4 < (int)param_4);
    }
    local_818 = 0;
    uVar4 = 0xffffffff;
    while( true ) {
      uVar4 = uVar4 + 1;
      uVar9 = uVar4 & 0x1f;
      uVar6 = param_3[(int)uVar4 >> 5] & 1 << (sbyte)uVar9;
      while ((uVar6 != 0 && (uVar9 != 0))) {
        uVar4 = uVar4 + 1;
        uVar9 = uVar4 & 0x1f;
        uVar6 = param_3[(int)uVar4 >> 5] & 1 << (sbyte)uVar9;
      }
      uVar6 = param_3[(int)uVar4 >> 5];
      if ((uVar6 & 1 << ((byte)uVar4 & 0x1f)) != 0) {
        while (uVar6 == 0xffffffff) {
          uVar4 = uVar4 + 0x20;
          uVar6 = param_3[(int)uVar4 >> 5];
        }
        if ((param_3[(int)uVar4 >> 5] & 1 << ((byte)uVar4 & 0x1f)) != 0) {
          bVar3 = (byte)uVar4 & 0x1f;
          uVar6 = 1 << bVar3 | 1U >> 0x20 - bVar3;
          do {
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
          } while ((param_3[(int)uVar4 >> 5] & uVar6) != 0);
        }
      }
      uVar6 = uVar4 - 1;
      if ((int)param_4 <= (int)uVar6) break;
      uVar7 = uVar4 & 0x1f;
      uVar9 = param_3[(int)uVar4 >> 5] & 1 << (sbyte)uVar7;
      while ((uVar9 == 0 && (uVar7 != 0))) {
        uVar4 = uVar4 + 1;
        uVar7 = uVar4 & 0x1f;
        uVar9 = param_3[(int)uVar4 >> 5] & 1 << (sbyte)uVar7;
      }
      uVar9 = param_3[(int)uVar4 >> 5];
      if ((uVar9 & 1 << ((byte)uVar4 & 0x1f)) == 0) {
        while (uVar9 == 0) {
          uVar4 = uVar4 + 0x20;
          uVar9 = param_3[(int)uVar4 >> 5];
        }
        if ((param_3[(int)uVar4 >> 5] & 1 << ((byte)uVar4 & 0x1f)) == 0) {
          bVar3 = (byte)uVar4 & 0x1f;
          uVar9 = 1 << bVar3 | 1U >> 0x20 - bVar3;
          do {
            uVar4 = uVar4 + 1;
            uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
          } while ((param_3[(int)uVar4 >> 5] & uVar9) == 0);
        }
      }
      local_814[0] = uVar4 - 1;
      if ((int)param_4 <= (int)local_814[0]) break;
      uVar4 = local_814[0];
      if ((int)uVar6 < (int)local_814[0]) {
        local_818 = local_818 + 1 + (local_814[0] - uVar6);
        FUN_005014a0(param_1,param_2,uVar6,local_814[0]);
        iVar5 = -1;
        do {
          iVar8 = *(int *)(param_2 + *(int *)(param_1 + uVar6 * 4) * 4);
          if (iVar5 != iVar8) {
            param_3[(int)uVar6 >> 5] = param_3[(int)uVar6 >> 5] | 1 << (uVar6 & 0x1f);
            iVar5 = iVar8;
          }
          uVar6 = uVar6 + 1;
          uVar4 = local_814[0];
        } while ((int)uVar6 <= (int)local_814[0]);
      }
    }
    local_81c = local_81c * 2;
    if (((int)param_4 < local_81c) || (local_818 == 0)) {
      iVar5 = 0;
      iVar8 = 0;
      if (0 < (int)param_4) {
        do {
          while (local_814[0x103] == 0) {
            local_814[0x103] = local_814[iVar5 + 0x104];
            iVar5 = iVar5 + 1;
          }
          local_814[iVar5 + 0x103] = local_814[iVar5 + 0x103] - 1;
          local_814[0x103] = local_814[iVar5 + 0x103];
          iVar1 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(char *)(param_2 + *(int *)(param_1 + iVar1)) = (char)iVar5;
        } while (iVar8 < (int)param_4);
        if (0xff < iVar5) {
          guard_check_icall();
        }
      }
      return;
    }
  } while( true );
}


