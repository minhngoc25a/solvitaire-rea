// Function: FUN_004662f0
// Entry: 004662f0
// Size: 987 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004662f0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ushort *puVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 local_30 [12];
  uint local_24;
  uint local_20;
  undefined1 *local_10;
  undefined1 *local_c;
  
  iVar14 = 0;
  uVar16 = 0;
  iVar13 = *(int *)(param_1 + 0x4d48);
  iVar7 = (*(int *)(param_1 + 0x4d44) + *(int *)(param_1 + 0x4d3c)) - iVar13;
  local_24 = *(uint *)(param_1 + 0x4d30);
  local_10 = (undefined1 *)((*(int *)(param_1 + 0x4d24) + *(int *)(param_1 + 0x4d18)) - local_24);
  local_20 = *(uint *)(param_1 + 0x4d34);
  local_c = (undefined1 *)((*(int *)(param_1 + 0x4d28) + *(int *)(param_1 + 0x4d1c)) - local_20);
  pbVar8 = (byte *)(*(int *)(param_1 + 0x4d20) + *(int *)(param_1 + 0x4d2c));
  pbVar15 = pbVar8 + -*(int *)(param_1 + 0x4d38);
  if (*(int *)(param_1 + 0x4cfc) == 0) {
    *(undefined1 *)(param_1 + 0x4f50) = 0;
    puVar17 = (undefined4 *)(param_1 + 0x4d4c);
    for (iVar10 = 0x81; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar17 = 0x4000400;
      puVar17 = puVar17 + 1;
    }
    iVar10 = 0;
    *(undefined4 *)(param_1 + 0x4f58) = 0;
    *(undefined4 *)(param_1 + 0x4f54) = 0xffffffff;
    uVar11 = 0;
    do {
      if (pbVar15 == pbVar8) {
        return 0xffffffe7;
      }
      bVar3 = *pbVar15;
      iVar10 = iVar10 + 1;
      pbVar15 = pbVar15 + 1;
      uVar11 = uVar11 << 8 | (uint)bVar3;
      *(uint *)(param_1 + 0x4f58) = uVar11;
    } while (iVar10 < 5);
    *(undefined4 *)(param_1 + 0x4cfc) = 1;
  }
  iVar10 = *(int *)(param_1 + 0x4d00);
  for (; (iVar10 != 0 && (uVar16 < param_3)); uVar16 = uVar16 + 1) {
    *(undefined1 *)(uVar16 + param_2) = *(undefined1 *)(param_1 + 0x4d04 + uVar16);
    piVar1 = (int *)(param_1 + 0x4d00);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
  }
  if (param_3 == 0) {
    puVar2 = (uint *)(param_1 + 0x4f60);
    uVar11 = *puVar2;
    *puVar2 = *puVar2 + uVar16;
    *(int *)(param_1 + 0x4f64) = *(int *)(param_1 + 0x4f64) + (uint)CARRY4(uVar11,uVar16);
    return uVar16;
  }
  while( true ) {
    uVar9 = iVar13 - iVar14;
    uVar11 = param_3 - uVar16;
    if (uVar9 <= param_3 - uVar16) {
      uVar11 = uVar9;
    }
    if ((*(int *)(param_1 + 0x4cfc) == 1) && (uVar11 != 0)) {
      while( true ) {
        bVar3 = *(byte *)(iVar7 + iVar14);
        *(byte *)(uVar16 + param_2) = bVar3;
        uVar16 = uVar16 + 1;
        if (((bVar3 & 0xfe) == 0xe8) ||
           ((*(char *)(param_1 + 0x4f50) == '\x0f' && ((bVar3 & 0xf0) == 0x80)))) break;
        iVar14 = iVar14 + 1;
        *(byte *)(param_1 + 0x4f50) = bVar3;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_00466468;
      }
      *(undefined4 *)(param_1 + 0x4cfc) = 2;
    }
    if ((uVar11 == 0) || (uVar16 == param_3)) break;
    *(undefined4 *)(param_1 + 0x4cfc) = 1;
    cVar4 = *(char *)(iVar7 + iVar14);
    iVar14 = iVar14 + 1;
    if (cVar4 == -0x18) {
      puVar12 = (ushort *)(param_1 + (*(byte *)(param_1 + 0x4f50) + 0x26a6) * 2);
    }
    else {
      puVar12 = (ushort *)(param_1 + 0x4f4c);
      if (cVar4 != -0x17) {
        puVar12 = (ushort *)(param_1 + 0x4f4e);
      }
    }
    uVar5 = *puVar12;
    uVar11 = (*(uint *)(param_1 + 0x4f54) >> 0xb) * (uint)uVar5;
    uVar6 = *puVar12;
    if (*(uint *)(param_1 + 0x4f58) < uVar11) {
      *(uint *)(param_1 + 0x4f54) = uVar11;
      *puVar12 = (short)(0x800 - uVar5 >> 5) + uVar6;
      if (*(uint *)(param_1 + 0x4f54) < 0x1000000) {
        if (pbVar15 == pbVar8) {
          return 0xffffffe7;
        }
        *(uint *)(param_1 + 0x4f54) = *(uint *)(param_1 + 0x4f54) << 8;
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        *(uint *)(param_1 + 0x4f58) = *(int *)(param_1 + 0x4f58) << 8 | (uint)bVar3;
      }
      *(char *)(param_1 + 0x4f50) = cVar4;
    }
    else {
      *(int *)(param_1 + 0x4f54) = *(int *)(param_1 + 0x4f54) - uVar11;
      *(uint *)(param_1 + 0x4f58) = *(uint *)(param_1 + 0x4f58) - uVar11;
      *puVar12 = uVar6 - (uVar5 >> 5);
      if (*(uint *)(param_1 + 0x4f54) < 0x1000000) {
        if (pbVar15 == pbVar8) {
          return 0xffffffe7;
        }
        *(uint *)(param_1 + 0x4f54) = *(uint *)(param_1 + 0x4f54) << 8;
        bVar3 = *pbVar15;
        pbVar15 = pbVar15 + 1;
        *(uint *)(param_1 + 0x4f58) = *(int *)(param_1 + 0x4f58) << 8 | (uint)bVar3;
      }
      if (cVar4 == -0x18) {
        if (local_24 < 4) {
          return 0xffffffe7;
        }
        local_24 = local_24 - 4;
        puVar18 = local_10;
        local_10 = local_10 + 4;
      }
      else {
        if (local_20 < 4) {
          return 0xffffffe7;
        }
        local_20 = local_20 - 4;
        puVar18 = local_c;
        local_c = local_c + 4;
      }
      iVar10 = ((CONCAT31(CONCAT21(CONCAT11(*puVar18,puVar18[1]),puVar18[2]),puVar18[3]) -
                *(int *)(param_1 + 0x4f60)) - uVar16) + -4;
      local_30[0] = (char)iVar10;
      local_30[1] = (char)((uint)iVar10 >> 8);
      uVar11 = 0;
      local_30[3] = (undefined1)((uint)iVar10 >> 0x18);
      *(undefined1 *)(param_1 + 0x4f50) = local_30[3];
      local_30[2] = (char)((uint)iVar10 >> 0x10);
      do {
        if (param_3 <= uVar16) {
          *(uint *)(param_1 + 0x4d00) = 4 - uVar11;
          do {
            puVar18 = local_30 + uVar11;
            iVar13 = *(int *)(param_1 + 0x4d00) + uVar11;
            uVar11 = uVar11 + 1;
            *(undefined1 *)(iVar13 + 0x4d00 + param_1) = *puVar18;
          } while (uVar11 < 4);
          goto LAB_00466468;
        }
        puVar18 = local_30 + uVar11;
        uVar11 = uVar11 + 1;
        *(undefined1 *)(uVar16 + param_2) = *puVar18;
        uVar16 = uVar16 + 1;
      } while (uVar11 < 4);
    }
  }
LAB_00466468:
  *(int *)(param_1 + 0x4d48) = *(int *)(param_1 + 0x4d48) - iVar14;
  puVar2 = (uint *)(param_1 + 0x4f60);
  uVar11 = *puVar2;
  *puVar2 = *puVar2 + uVar16;
  *(int *)(param_1 + 0x4f64) = *(int *)(param_1 + 0x4f64) + (uint)CARRY4(uVar11,uVar16);
  *(int *)(param_1 + 0x4d38) = (int)pbVar8 - (int)pbVar15;
  *(uint *)(param_1 + 0x4d30) = local_24;
  *(uint *)(param_1 + 0x4d34) = local_20;
  return uVar16;
}


