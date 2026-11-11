// Function: FUN_004ca260
// Entry: 004ca260
// Size: 14818 bytes
// Thunk: false
// External: false


void FUN_004ca260(int param_1)

{
  int *piVar1;
  short *psVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  int iVar67;
  int iVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  char *pcVar76;
  char *pcVar77;
  char cVar78;
  int iVar79;
  uint uVar80;
  uint uVar81;
  int iVar82;
  undefined4 *puVar83;
  uint uVar84;
  int iVar85;
  undefined1 uVar86;
  void *pvVar87;
  uint uVar88;
  uint uVar89;
  size_t sVar90;
  uint uVar91;
  byte *pbVar92;
  uint *puVar93;
  byte *pbVar94;
  size_t _Size;
  undefined4 *puVar95;
  uint uVar96;
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  undefined1 *puVar103;
  undefined1 *local_11c;
  uint local_118;
  uint local_114;
  int local_108;
  int local_100;
  undefined1 *local_fc;
  uint local_f4;
  int local_f0;
  byte local_e9;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_58;
  int local_50;
  int local_4c;
  uint local_48;
  void *local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18 [6];
  
  iVar102 = *(int *)(param_1 + 0x54);
  pvVar87 = (void *)(param_1 + 0x9324);
  iVar6 = *(int *)(param_1 + 0x28);
  local_44 = pvVar87;
  _Size = iVar102 + 2;
  local_100 = 6;
  do {
    if (0 < (int)_Size) {
      _memset(pvVar87,0xf,_Size);
    }
    pvVar87 = (void *)((int)pvVar87 + 0x102);
    local_100 = local_100 + -1;
  } while (local_100 != 0);
  if (*(int *)(param_1 + 0x274) < 1) {
    guard_check_icall();
  }
  local_f0 = *(int *)(param_1 + 0x274);
  if (local_f0 < 200) {
    uVar88 = 2;
  }
  else if (local_f0 < 600) {
    uVar88 = 3;
  }
  else if (local_f0 < 0x4b0) {
    uVar88 = 4;
  }
  else {
    uVar88 = (0x95f < local_f0) + 5;
  }
  local_100 = 0;
  local_f4 = 0;
  local_11c = (undefined1 *)((uVar88 + 0x91) * 0x102 + param_1);
  uVar30 = uVar88;
  do {
    iVar82 = 0;
    iVar79 = local_100 + -1;
    if (0 < local_f0 / (int)uVar30) {
      iVar28 = param_1 + (local_100 + 0x9d) * 4;
      do {
        if (iVar102 + 1 <= iVar79) break;
        iVar82 = iVar82 + *(int *)(iVar28 + 4);
        iVar28 = iVar28 + 4;
        iVar79 = iVar79 + 1;
      } while (iVar82 < local_f0 / (int)uVar30);
    }
    if (((local_100 < iVar79) && (uVar30 != uVar88)) && (uVar30 != 1)) {
      uVar29 = local_f4 & 0x80000001;
      if ((int)uVar29 < 0) {
        uVar29 = (uVar29 - 1 | 0xfffffffe) + 1;
      }
      if (uVar29 == 1) {
        iVar82 = iVar82 - *(int *)(param_1 + 0x278 + iVar79 * 4);
        iVar79 = iVar79 + -1;
      }
    }
    iVar28 = 0;
    puVar103 = local_11c;
    if (0 < (int)_Size) {
      do {
        if ((iVar28 < local_100) || (iVar79 < iVar28)) {
          uVar86 = 0xf;
        }
        else {
          uVar86 = 0;
        }
        *puVar103 = uVar86;
        iVar28 = iVar28 + 1;
        puVar103 = puVar103 + 1;
      } while (iVar28 < (int)_Size);
    }
    local_100 = iVar79 + 1;
    local_f0 = local_f0 - iVar82;
    uVar30 = uVar30 - 1;
    local_11c = local_11c + -0x102;
    local_f4 = local_f4 + 1;
    if ((int)uVar30 < 1) {
      local_58 = (uint *)(param_1 + 0xb160);
      local_118 = 4;
      do {
        puVar83 = (undefined4 *)(param_1 + 0xb160);
        puVar95 = local_18;
        for (uVar30 = uVar88; uVar29 = uVar88, uVar30 != 0; uVar30 = uVar30 - 1) {
          *puVar95 = 0;
          puVar95 = puVar95 + 1;
        }
        do {
          sVar90 = _Size;
          puVar95 = puVar83;
          if (0 < (int)_Size) {
            for (; sVar90 != 0; sVar90 = sVar90 - 1) {
              *puVar95 = 0;
              puVar95 = puVar95 + 1;
            }
          }
          puVar83 = puVar83 + 0x102;
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
        if ((uVar88 == 6) && (0 < (int)_Size)) {
          pbVar94 = (byte *)(param_1 + 0x9324);
          sVar90 = _Size;
          puVar93 = (uint *)(param_1 + 0xc994);
          do {
            puVar93[-1] = (uint)pbVar94[0x102] << 0x10 | (uint)*pbVar94;
            *puVar93 = (uint)pbVar94[0x306] << 0x10 | (uint)pbVar94[0x204];
            puVar93[1] = (uint)pbVar94[0x50a] << 0x10 | (uint)pbVar94[0x408];
            sVar90 = sVar90 - 1;
            pbVar94 = pbVar94 + 1;
            puVar93 = puVar93 + 4;
          } while (sVar90 != 0);
        }
        iVar102 = *(int *)(param_1 + 0x274);
        local_e0 = 0;
        local_108 = 0;
        uVar30 = uVar88;
        pvVar87 = local_44;
        puVar93 = local_58;
        local_48 = uVar88;
        if (0 < iVar102) {
          local_fc = (undefined1 *)(param_1 + 0x680);
          do {
            local_48 = local_108 + 0x31;
            iVar79 = iVar102 + -1;
            if ((int)local_48 < iVar102) {
              iVar79 = local_48;
            }
            puVar95 = &local_40;
            for (uVar29 = uVar88 >> 1; uVar29 != 0; uVar29 = uVar29 - 1) {
              *puVar95 = 0;
              puVar95 = puVar95 + 1;
            }
            for (uVar29 = (uint)((uVar88 & 1) != 0); uVar29 != 0; uVar29 = uVar29 - 1) {
              *(undefined2 *)puVar95 = 0;
              puVar95 = (undefined4 *)((int)puVar95 + 2);
            }
            iVar102 = local_108;
            if ((uVar88 == 6) && (iVar79 - local_108 == 0x31)) {
              uVar29 = (uint)*(ushort *)(iVar6 + local_108 * 2);
              uVar31 = (uint)*(ushort *)(iVar6 + 2 + local_108 * 2);
              uVar32 = (uint)*(ushort *)(iVar6 + 4 + local_108 * 2);
              uVar33 = (uint)*(ushort *)(iVar6 + 6 + local_108 * 2);
              uVar34 = (uint)*(ushort *)(iVar6 + 8 + local_108 * 2);
              uVar35 = (uint)*(ushort *)(iVar6 + 10 + local_108 * 2);
              uVar36 = (uint)*(ushort *)(iVar6 + 0xc + local_108 * 2);
              uVar37 = (uint)*(ushort *)(iVar6 + 0xe + local_108 * 2);
              uVar38 = (uint)*(ushort *)(iVar6 + 0x10 + local_108 * 2);
              uVar39 = (uint)*(ushort *)(iVar6 + 0x12 + local_108 * 2);
              uVar40 = (uint)*(ushort *)(iVar6 + 0x14 + local_108 * 2);
              uVar41 = (uint)*(ushort *)(iVar6 + 0x16 + local_108 * 2);
              uVar42 = (uint)*(ushort *)(iVar6 + 0x18 + local_108 * 2);
              uVar43 = (uint)*(ushort *)(iVar6 + 0x1a + local_108 * 2);
              uVar44 = (uint)*(ushort *)(iVar6 + 0x1c + local_108 * 2);
              uVar91 = (uint)*(ushort *)(iVar6 + 0x2a + local_108 * 2);
              uVar89 = (uint)*(ushort *)(iVar6 + 0x2c + local_108 * 2);
              uVar96 = (uint)*(ushort *)(iVar6 + 0x2e + local_108 * 2);
              uVar84 = (uint)*(ushort *)(iVar6 + 0x30 + local_108 * 2);
              uVar45 = (uint)*(ushort *)(iVar6 + 0x32 + local_108 * 2);
              uVar46 = (uint)*(ushort *)(iVar6 + 0x34 + local_108 * 2);
              uVar47 = (uint)*(ushort *)(iVar6 + 0x36 + local_108 * 2);
              uVar48 = (uint)*(ushort *)(iVar6 + 0x38 + local_108 * 2);
              uVar49 = (uint)*(ushort *)(iVar6 + 0x3a + local_108 * 2);
              uVar50 = (uint)*(ushort *)(iVar6 + 0x3c + local_108 * 2);
              uVar51 = (uint)*(ushort *)(iVar6 + 0x3e + local_108 * 2);
              uVar52 = (uint)*(ushort *)(iVar6 + 0x40 + local_108 * 2);
              uVar53 = (uint)*(ushort *)(iVar6 + 0x42 + local_108 * 2);
              uVar54 = (uint)*(ushort *)(iVar6 + 0x44 + local_108 * 2);
              uVar55 = (uint)*(ushort *)(iVar6 + 0x46 + local_108 * 2);
              uVar56 = (uint)*(ushort *)(iVar6 + 0x48 + local_108 * 2);
              uVar57 = (uint)*(ushort *)(iVar6 + 0x4a + local_108 * 2);
              uVar58 = (uint)*(ushort *)(iVar6 + 0x4c + local_108 * 2);
              uVar80 = (uint)*(ushort *)(iVar6 + 0x4e + local_108 * 2);
              uVar59 = (uint)*(ushort *)(iVar6 + 0x50 + local_108 * 2);
              uVar60 = (uint)*(ushort *)(iVar6 + 0x52 + local_108 * 2);
              uVar61 = (uint)*(ushort *)(iVar6 + 0x54 + local_108 * 2);
              uVar62 = (uint)*(ushort *)(iVar6 + 0x56 + local_108 * 2);
              uVar63 = (uint)*(ushort *)(iVar6 + 0x58 + local_108 * 2);
              uVar64 = (uint)*(ushort *)(iVar6 + 0x5a + local_108 * 2);
              uVar65 = (uint)*(ushort *)(iVar6 + 0x5c + local_108 * 2);
              uVar66 = (uint)*(ushort *)(iVar6 + 0x5e + local_108 * 2);
              uVar81 = (uint)*(ushort *)(iVar6 + 0x28 + local_108 * 2);
              local_40 = *(int *)(param_1 + (uVar80 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar58 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar57 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar56 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar55 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar54 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar53 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar52 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar51 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar50 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar49 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar48 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar47 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar46 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar45 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar84 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar96 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar89 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar91 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar81 + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x26 + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x24 + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x22 + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x20 + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x1e + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar44 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar43 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar42 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar41 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar40 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar39 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar38 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar37 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar36 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar35 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar34 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar33 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar32 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar31 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar29 + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x62 + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 +
                                 (*(ushort *)(iVar6 + 0x60 + local_108 * 2) + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar66 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar65 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar64 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar63 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar62 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar61 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar60 + 0xc99) * 0x10) +
                         *(int *)(param_1 + (uVar59 + 0xc99) * 0x10);
              iVar67 = uVar84 * 0x10 + param_1;
              iVar68 = uVar96 * 0x10 + param_1;
              local_50 = uVar89 * 0x10 + param_1;
              local_28 = param_1 + uVar91 * 0x10;
              iVar102 = uVar43 * 0x10;
              iVar82 = uVar42 * 0x10;
              iVar28 = uVar41 * 0x10;
              iVar85 = uVar40 * 0x10;
              local_2c = param_1 + uVar81 * 0x10;
              iVar7 = uVar39 * 0x10;
              iVar8 = uVar38 * 0x10;
              iVar9 = uVar37 * 0x10;
              iVar10 = uVar36 * 0x10;
              local_30 = (uint)*(ushort *)(iVar6 + 0x26 + local_108 * 2) * 0x10 + param_1;
              local_1c = (uint)*(ushort *)(iVar6 + 0x24 + local_108 * 2) * 0x10 + param_1;
              uVar36 = (uint)*(ushort *)(iVar6 + 0x1e + local_108 * 2);
              local_20 = (uint)*(ushort *)(iVar6 + 0x22 + local_108 * 2) * 0x10 + param_1;
              local_24 = (uint)*(ushort *)(iVar6 + 0x20 + local_108 * 2) * 0x10 + param_1;
              iVar69 = uVar44 * 0x10;
              iVar11 = uVar35 * 0x10;
              iVar12 = uVar66 * 0x10;
              iVar13 = uVar34 * 0x10;
              uVar34 = (uint)*(ushort *)(iVar6 + local_48 * 2);
              iVar14 = uVar33 * 0x10;
              iVar15 = uVar64 * 0x10;
              iVar16 = uVar32 * 0x10;
              uVar32 = (uint)*(ushort *)(iVar6 + 0x60 + local_108 * 2);
              iVar17 = uVar31 * 0x10;
              iVar18 = uVar62 * 0x10;
              iVar19 = uVar29 * 0x10;
              iVar20 = uVar60 * 0x10;
              iVar21 = uVar80 * 0x10;
              iVar22 = uVar57 * 0x10;
              iVar23 = uVar55 * 0x10;
              iVar24 = uVar53 * 0x10;
              iVar70 = uVar65 * 0x10;
              iVar97 = uVar63 * 0x10;
              iVar71 = uVar61 * 0x10;
              iVar98 = uVar59 * 0x10;
              iVar72 = uVar58 * 0x10;
              iVar99 = uVar56 * 0x10;
              iVar73 = uVar54 * 0x10;
              iVar100 = uVar52 * 0x10;
              iVar25 = uVar51 * 0x10;
              local_4c = uVar45 * 0x10;
              iVar74 = uVar50 * 0x10;
              iVar26 = uVar47 * 0x10;
              iVar75 = uVar46 * 0x10;
              iVar27 = uVar49 * 0x10;
              iVar101 = uVar48 * 0x10;
              local_3c = *(int *)(local_4c + 0xc994 + param_1) + *(int *)(iVar75 + 0xc994 + param_1)
                         + *(int *)(iVar26 + 0xc994 + param_1) +
                         *(int *)(iVar101 + 0xc994 + param_1) + *(int *)(iVar27 + 0xc994 + param_1)
                         + *(int *)(iVar74 + 0xc994 + param_1) + *(int *)(iVar25 + 0xc994 + param_1)
                         + *(int *)(iVar100 + 0xc994 + param_1) +
                         *(int *)(iVar24 + 0xc994 + param_1) + *(int *)(iVar73 + 0xc994 + param_1) +
                         *(int *)(iVar23 + 0xc994 + param_1) + *(int *)(iVar99 + 0xc994 + param_1) +
                         *(int *)(iVar22 + 0xc994 + param_1) + *(int *)(iVar72 + 0xc994 + param_1) +
                         *(int *)(iVar21 + 0xc994 + param_1) + *(int *)(iVar98 + 0xc994 + param_1) +
                         *(int *)(iVar20 + 0xc994 + param_1) + *(int *)(iVar71 + 0xc994 + param_1) +
                         *(int *)(iVar19 + 0xc994 + param_1) + *(int *)(iVar18 + 0xc994 + param_1) +
                         *(int *)(iVar17 + 0xc994 + param_1) + *(int *)(iVar97 + 0xc994 + param_1) +
                         *(int *)(iVar16 + 0xc994 + param_1) + *(int *)(iVar15 + 0xc994 + param_1) +
                         *(int *)(iVar14 + 0xc994 + param_1) + *(int *)(iVar70 + 0xc994 + param_1) +
                         *(int *)(iVar13 + 0xc994 + param_1) + *(int *)(iVar12 + 0xc994 + param_1) +
                         *(int *)(iVar11 + 0xc994 + param_1) +
                         *(int *)(param_1 + 0xc994 + uVar32 * 0x10) +
                         *(int *)(iVar10 + 0xc994 + param_1) +
                         *(int *)(param_1 + 0xc994 + uVar34 * 0x10) +
                         *(int *)(iVar9 + 0xc994 + param_1) + *(int *)(iVar8 + 0xc994 + param_1) +
                         *(int *)(iVar7 + 0xc994 + param_1) + *(int *)(iVar85 + 0xc994 + param_1) +
                         *(int *)(iVar28 + 0xc994 + param_1) + *(int *)(iVar82 + 0xc994 + param_1) +
                         *(int *)(iVar102 + 0xc994 + param_1) + *(int *)(iVar69 + 0xc994 + param_1)
                         + *(int *)(param_1 + 0xc994 + uVar36 * 0x10) + *(int *)(local_24 + 0xc994)
                         + *(int *)(local_20 + 0xc994) + *(int *)(local_1c + 0xc994) +
                         *(int *)(local_30 + 0xc994) + *(int *)(local_2c + 0xc994) +
                         *(int *)(local_28 + 0xc994) + *(int *)(local_50 + 0xc994) +
                         *(int *)(iVar68 + 0xc994) + *(int *)(iVar67 + 0xc994);
              local_38 = *(int *)(local_4c + 0xc998 + param_1) + *(int *)(iVar75 + 0xc998 + param_1)
                         + *(int *)(iVar26 + 0xc998 + param_1) +
                         *(int *)(iVar101 + 0xc998 + param_1) + *(int *)(iVar27 + 0xc998 + param_1)
                         + *(int *)(iVar74 + 0xc998 + param_1) + *(int *)(iVar25 + 0xc998 + param_1)
                         + *(int *)(iVar100 + 0xc998 + param_1) +
                         *(int *)(iVar24 + 0xc998 + param_1) + *(int *)(iVar73 + 0xc998 + param_1) +
                         *(int *)(iVar23 + 0xc998 + param_1) + *(int *)(iVar99 + 0xc998 + param_1) +
                         *(int *)(iVar22 + 0xc998 + param_1) + *(int *)(iVar72 + 0xc998 + param_1) +
                         *(int *)(iVar21 + 0xc998 + param_1) + *(int *)(iVar98 + 0xc998 + param_1) +
                         *(int *)(iVar20 + 0xc998 + param_1) + *(int *)(iVar71 + 0xc998 + param_1) +
                         *(int *)(iVar19 + 0xc998 + param_1) + *(int *)(iVar18 + 0xc998 + param_1) +
                         *(int *)(iVar17 + 0xc998 + param_1) + *(int *)(iVar97 + 0xc998 + param_1) +
                         *(int *)(iVar16 + 0xc998 + param_1) + *(int *)(iVar15 + 0xc998 + param_1) +
                         *(int *)(iVar14 + 0xc998 + param_1) + *(int *)(iVar70 + 0xc998 + param_1) +
                         *(int *)(iVar13 + 0xc998 + param_1) + *(int *)(iVar12 + 0xc998 + param_1) +
                         *(int *)(iVar11 + 0xc998 + param_1) +
                         *(int *)(param_1 + 0xc998 + uVar32 * 0x10) +
                         *(int *)(iVar10 + 0xc998 + param_1) +
                         *(int *)(param_1 + 0xc998 + uVar34 * 0x10) +
                         *(int *)(iVar9 + 0xc998 + param_1) + *(int *)(iVar8 + 0xc998 + param_1) +
                         *(int *)(iVar7 + 0xc998 + param_1) + *(int *)(iVar85 + 0xc998 + param_1) +
                         *(int *)(iVar28 + 0xc998 + param_1) + *(int *)(iVar82 + 0xc998 + param_1) +
                         *(int *)(iVar102 + 0xc998 + param_1) + *(int *)(iVar69 + 0xc998 + param_1)
                         + *(int *)(param_1 + 0xc998 + uVar36 * 0x10) + *(int *)(local_24 + 0xc998)
                         + *(int *)(local_20 + 0xc998) + *(int *)(local_1c + 0xc998) +
                         *(int *)(local_30 + 0xc998) + *(int *)(local_2c + 0xc998) +
                         *(int *)(local_28 + 0xc998) + *(int *)(local_50 + 0xc998) +
                         *(int *)(iVar68 + 0xc998) + *(int *)(iVar67 + 0xc998);
            }
            else {
              for (; iVar102 <= iVar79; iVar102 = iVar102 + 1) {
                iVar82 = 0;
                pbVar94 = (byte *)(*(ushort *)(iVar6 + iVar102 * 2) + 0x9324 + param_1);
                do {
                  bVar5 = *pbVar94;
                  pbVar94 = pbVar94 + 0x102;
                  psVar2 = (short *)((int)&local_40 + iVar82 * 2);
                  *psVar2 = *psVar2 + (ushort)bVar5;
                  iVar82 = iVar82 + 1;
                } while (iVar82 < (int)uVar88);
              }
            }
            iVar82 = -1;
            iVar102 = 0;
            uVar29 = 999999999;
            do {
              uVar31 = (uint)*(ushort *)((int)&local_40 + iVar102 * 2);
              iVar28 = iVar102;
              if (uVar29 <= uVar31) {
                uVar31 = uVar29;
                iVar28 = iVar82;
              }
              iVar82 = iVar28;
              iVar102 = iVar102 + 1;
              uVar29 = uVar31;
            } while (iVar102 < (int)uVar88);
            local_e0 = local_e0 + 1;
            *local_fc = (char)iVar82;
            local_fc = local_fc + 1;
            if ((uVar88 == 6) && (iVar79 - local_108 == 0x31)) {
              iVar102 = (iVar82 + 0x2c) * 0x102;
              piVar1 = (int *)(param_1 + ((uint)*(ushort *)(iVar6 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 2 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 4 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 6 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 8 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 10 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0xc + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0xe + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x10 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x12 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x14 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x16 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x18 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x1a + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x1c + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x1e + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x20 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x22 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x24 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x26 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x28 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x2a + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x2c + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x2e + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x30 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x32 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x34 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x36 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x38 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x3a + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x3c + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x3e + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x40 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x42 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x44 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x46 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x48 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x4a + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x4c + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x4e + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x50 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x52 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x54 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x56 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x58 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x5a + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x5c + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x5e + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x60 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
              piVar1 = (int *)(param_1 +
                              ((uint)*(ushort *)(iVar6 + 0x62 + local_108 * 2) + iVar102) * 4);
              *piVar1 = *piVar1 + 1;
            }
            else if (local_108 <= iVar79) {
              do {
                iVar102 = local_108 * 2;
                local_108 = local_108 + 1;
                piVar1 = (int *)(param_1 +
                                ((uint)*(ushort *)(iVar6 + iVar102) + (iVar82 + 0x2c) * 0x102) * 4);
                *piVar1 = *piVar1 + 1;
              } while (local_108 <= iVar79);
            }
            iVar102 = *(int *)(param_1 + 0x274);
            local_108 = iVar79 + 1;
            local_48 = uVar88;
          } while (local_108 < iVar102);
        }
        do {
          FUN_00502b80((int)pvVar87,puVar93,_Size,0x11);
          uVar30 = uVar30 - 1;
          pvVar87 = (void *)((int)pvVar87 + 0x102);
          puVar93 = puVar93 + 0x102;
        } while (uVar30 != 0);
        local_118 = local_118 + -1;
      } while (local_118 != 0);
      if ((0x7fff < local_e0) || (0x4652 < local_e0)) {
        guard_check_icall();
      }
      iVar102 = 0;
      do {
        *(char *)((int)&local_58 + iVar102) = (char)iVar102;
        iVar102 = iVar102 + 1;
      } while (iVar102 < (int)uVar88);
      if (0 < local_e0) {
        puVar103 = (undefined1 *)(param_1 + 0x4cd2);
        iVar102 = local_e0;
        cVar78 = (char)local_58;
        do {
          cVar3 = puVar103[-0x4652];
          iVar79 = 0;
          while (cVar3 != cVar78) {
            cVar4 = *(char *)((int)&local_58 + iVar79 + 1);
            *(char *)((int)&local_58 + iVar79 + 1) = cVar78;
            iVar79 = iVar79 + 1;
            cVar78 = cVar4;
          }
          *puVar103 = (char)iVar79;
          puVar103 = puVar103 + 1;
          local_58 = (uint *)CONCAT31(local_58._1_3_,cVar78);
          iVar102 = iVar102 + -1;
        } while (iVar102 != 0);
      }
      iVar102 = param_1 + 0x9930;
      pbVar94 = (byte *)(param_1 + 0x9324);
      local_fc = (undefined1 *)uVar88;
      do {
        uVar30 = 0;
        uVar29 = 0x20;
        local_118 = 0;
        sVar90 = _Size;
        pbVar92 = pbVar94;
        if (0 < (int)_Size) {
          do {
            uVar31 = (uint)*pbVar92;
            local_118 = uVar31;
            if (uVar31 <= uVar30) {
              local_118 = uVar30;
            }
            if (uVar29 <= uVar31) {
              uVar31 = uVar29;
            }
            uVar29 = uVar31;
            sVar90 = sVar90 - 1;
            uVar30 = local_118;
            pbVar92 = pbVar92 + 1;
          } while (sVar90 != 0);
          if (0x11 < local_118) {
            guard_check_icall();
          }
          if (uVar29 == 0) {
            guard_check_icall();
          }
        }
        FUN_00502b30(iVar102,(int)pbVar94,uVar29,local_118,_Size);
        iVar102 = iVar102 + 0x408;
        pbVar94 = pbVar94 + 0x102;
        local_fc = (undefined1 *)((int)local_fc - 1);
      } while (local_fc != (undefined1 *)0x0);
      iVar102 = 0;
      pcVar76 = (char *)(param_1 + 0x58);
      do {
        *(undefined1 *)((int)&local_40 + iVar102) = 0;
        iVar79 = 0x10;
        do {
          if (*pcVar76 != '\0') {
            *(undefined1 *)((int)&local_40 + iVar102) = 1;
          }
          pcVar76 = pcVar76 + 1;
          iVar79 = iVar79 + -1;
        } while (iVar79 != 0);
        iVar102 = iVar102 + 1;
      } while (iVar102 < 0x10);
      piVar1 = (int *)(param_1 + 0x25c);
      local_118 = 0;
      do {
        iVar102 = *piVar1;
        if (*(char *)((int)&local_40 + local_118) == '\0') {
          while (7 < iVar102) {
            *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                 *(undefined1 *)(param_1 + 0x25b);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            iVar102 = *piVar1 + -8;
            *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
            *piVar1 = iVar102;
          }
        }
        else {
          while (7 < iVar102) {
            *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                 *(undefined1 *)(param_1 + 0x25b);
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            iVar102 = *piVar1 + -8;
            *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
            *piVar1 = iVar102;
          }
          *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 1 << (0x1fU - iVar102 & 0x1f);
        }
        *piVar1 = iVar102 + 1;
        local_118 = local_118 + 1;
      } while ((int)local_118 < 0x10);
      pcVar76 = (char *)(param_1 + 0x58);
      local_e4 = 0;
      piVar1 = (int *)(param_1 + 0x25c);
      do {
        if (*(char *)((int)&local_40 + local_e4) != '\0') {
          local_fc = (undefined1 *)0x10;
          pcVar77 = pcVar76;
          do {
            iVar102 = *piVar1;
            if (*pcVar77 == '\0') {
              while (7 < iVar102) {
                *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                     *(undefined1 *)(param_1 + 0x25b);
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                iVar102 = *piVar1 + -8;
                *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
                *piVar1 = iVar102;
              }
            }
            else {
              while (7 < iVar102) {
                *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                     *(undefined1 *)(param_1 + 0x25b);
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                iVar102 = *piVar1 + -8;
                *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
                *piVar1 = iVar102;
              }
              *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) | 1 << (0x1fU - iVar102 & 0x1f);
            }
            *piVar1 = iVar102 + 1;
            pcVar77 = pcVar77 + 1;
            local_fc = (undefined1 *)((int)local_fc + -1);
          } while (local_fc != (undefined1 *)0x0);
        }
        local_e4 = local_e4 + 1;
        pcVar76 = pcVar76 + 0x10;
      } while (local_e4 < 0x10);
      iVar102 = *(int *)(param_1 + 0x25c);
      while (7 < iVar102) {
        *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
             *(undefined1 *)(param_1 + 0x25b);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        iVar102 = *(int *)(param_1 + 0x25c) + -8;
        *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
        *(int *)(param_1 + 0x25c) = iVar102;
      }
      iVar79 = iVar102 + 3;
      uVar30 = uVar88 << (0x1dU - (char)iVar102 & 0x1f) | *(uint *)(param_1 + 600);
      *(uint *)(param_1 + 600) = uVar30;
      *(int *)(param_1 + 0x25c) = iVar79;
      while (7 < iVar79) {
        *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) = (char)(uVar30 >> 0x18);
        iVar79 = *(int *)(param_1 + 0x25c) + -8;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        uVar30 = *(int *)(param_1 + 600) << 8;
        *(uint *)(param_1 + 600) = uVar30;
        *(int *)(param_1 + 0x25c) = iVar79;
      }
      iVar102 = iVar79 + 0xf;
      uVar30 = local_e0 << (0x11U - (char)iVar79 & 0x1f) | uVar30;
      *(uint *)(param_1 + 600) = uVar30;
      *(int *)(param_1 + 0x25c) = iVar102;
      if (0 < local_e0) {
        pbVar94 = (byte *)(param_1 + 0x4cd2);
        iVar79 = local_e0;
        do {
          local_118 = 0;
          if (*pbVar94 != 0) {
            do {
              while (7 < iVar102) {
                *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                     (char)(uVar30 >> 0x18);
                iVar102 = *(int *)(param_1 + 0x25c) + -8;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                uVar30 = *(int *)(param_1 + 600) << 8;
                *(uint *)(param_1 + 600) = uVar30;
                *(int *)(param_1 + 0x25c) = iVar102;
              }
              local_118 = local_118 + 1;
              uVar30 = uVar30 | 1 << (0x1fU - iVar102 & 0x1f);
              iVar102 = iVar102 + 1;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar102;
            } while ((int)local_118 < (int)(uint)*pbVar94);
          }
          while (7 < iVar102) {
            *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) = (char)(uVar30 >> 0x18);
            iVar102 = *(int *)(param_1 + 0x25c) + -8;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
            uVar30 = *(int *)(param_1 + 600) << 8;
            *(uint *)(param_1 + 600) = uVar30;
            *(int *)(param_1 + 0x25c) = iVar102;
          }
          iVar102 = iVar102 + 1;
          *(uint *)(param_1 + 600) = uVar30;
          pbVar94 = pbVar94 + 1;
          *(int *)(param_1 + 0x25c) = iVar102;
          iVar79 = iVar79 + -1;
        } while (iVar79 != 0);
      }
      pbVar94 = (byte *)(param_1 + 0x9324);
      local_fc = (undefined1 *)uVar88;
      do {
        local_114 = (uint)*pbVar94;
        while (7 < iVar102) {
          *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) = (char)(uVar30 >> 0x18);
          iVar102 = *(int *)(param_1 + 0x25c) + -8;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
          uVar30 = *(int *)(param_1 + 600) << 8;
          *(uint *)(param_1 + 600) = uVar30;
          *(int *)(param_1 + 0x25c) = iVar102;
        }
        cVar78 = (char)iVar102;
        iVar102 = iVar102 + 5;
        uVar30 = local_114 << (0x1bU - cVar78 & 0x1f) | uVar30;
        *(int *)(param_1 + 0x25c) = iVar102;
        *(uint *)(param_1 + 600) = uVar30;
        pbVar92 = pbVar94;
        local_118 = _Size;
        if (0 < (int)_Size) {
          do {
            local_e9 = *pbVar92;
            if ((int)local_114 < (int)(uint)local_e9) {
              do {
                while (7 < iVar102) {
                  *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                       (char)(uVar30 >> 0x18);
                  iVar102 = *(int *)(param_1 + 0x25c) + -8;
                  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                  uVar30 = *(int *)(param_1 + 600) << 8;
                  *(uint *)(param_1 + 600) = uVar30;
                  *(int *)(param_1 + 0x25c) = iVar102;
                }
                cVar78 = (char)iVar102;
                iVar102 = iVar102 + 2;
                uVar30 = 2 << (0x1eU - cVar78 & 0x1f) | uVar30;
                *(uint *)(param_1 + 600) = uVar30;
                local_114 = local_114 + 1;
                *(int *)(param_1 + 0x25c) = iVar102;
                local_e9 = *pbVar92;
              } while ((int)local_114 < (int)(uint)local_e9);
            }
            if ((int)(uint)local_e9 < (int)local_114) {
              do {
                while (7 < iVar102) {
                  *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                       (char)(uVar30 >> 0x18);
                  iVar102 = *(int *)(param_1 + 0x25c) + -8;
                  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                  uVar30 = *(int *)(param_1 + 600) << 8;
                  *(uint *)(param_1 + 600) = uVar30;
                  *(int *)(param_1 + 0x25c) = iVar102;
                }
                cVar78 = (char)iVar102;
                iVar102 = iVar102 + 2;
                uVar30 = 3 << (0x1eU - cVar78 & 0x1f) | uVar30;
                *(int *)(param_1 + 0x25c) = iVar102;
                *(uint *)(param_1 + 600) = uVar30;
                local_114 = local_114 - 1;
              } while ((int)(uint)*pbVar92 < (int)local_114);
            }
            while (7 < iVar102) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar102 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar102;
            }
            iVar102 = iVar102 + 1;
            *(uint *)(param_1 + 600) = uVar30;
            *(int *)(param_1 + 0x25c) = iVar102;
            local_118 = local_118 - 1;
            pbVar92 = pbVar92 + 1;
          } while (local_118 != 0);
        }
        pbVar94 = pbVar94 + 0x102;
        local_fc = (undefined1 *)((int)local_fc - 1);
      } while (local_fc != (undefined1 *)0x0);
      iVar102 = *(int *)(param_1 + 0x274);
      iVar79 = 0;
      local_e8 = 0;
      local_fc = (undefined1 *)0x0;
      if (0 < iVar102) {
        do {
          iVar79 = iVar102 + -1;
          if ((int)local_fc + 0x31 < iVar102) {
            iVar79 = (int)local_fc + 0x31;
          }
          if (uVar88 <= *(byte *)(param_1 + 0x680 + local_e8)) {
            guard_check_icall();
          }
          if ((uVar88 == 6) && (iVar79 - (int)local_fc == 0x31)) {
            uVar29 = (uint)*(byte *)(param_1 + 0x680 + local_e8);
            uVar30 = (uint)*(ushort *)(iVar6 + (int)local_fc * 2);
            iVar85 = (uVar29 + 0x92) * 0x102 + param_1;
            iVar28 = (uVar29 + 0x26) * 0x408 + param_1;
            iVar102 = *(int *)(iVar28 + uVar30 * 4);
            bVar5 = *(byte *)(uVar30 + iVar85);
            iVar82 = *(int *)(param_1 + 0x25c);
            while (7 < iVar82) {
              *(undefined1 *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   *(undefined1 *)(param_1 + 0x25b);
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 600) = *(int *)(param_1 + 600) << 8;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | *(uint *)(param_1 + 600);
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 2 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 4 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 6 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 8 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 10 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0xc + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0xe + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x10 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x12 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x14 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x16 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x18 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x1a + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x1c + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x1e + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x20 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x22 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x24 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x26 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x28 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x2a + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x2c + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x2e + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x30 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x32 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x34 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x36 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x38 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x3a + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x3c + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x3e + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x40 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x42 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x44 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - (char)iVar82) - bVar5 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x46 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x48 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x4a + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x4c + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x4e + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x50 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x52 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x54 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x56 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x58 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x5a + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x5c + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x5e + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x60 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            uVar30 = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 600) = uVar30;
            iVar82 = iVar82 + (uint)bVar5;
            *(int *)(param_1 + 0x25c) = iVar82;
            uVar29 = (uint)*(ushort *)(iVar6 + 0x62 + (int)local_fc * 2);
            iVar102 = *(int *)(iVar28 + uVar29 * 4);
            bVar5 = *(byte *)(uVar29 + iVar85);
            while (7 < iVar82) {
              *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                   (char)(uVar30 >> 0x18);
              iVar82 = *(int *)(param_1 + 0x25c) + -8;
              *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
              uVar30 = *(int *)(param_1 + 600) << 8;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar82;
            }
            *(uint *)(param_1 + 600) = iVar102 << ((' ' - bVar5) - (char)iVar82 & 0x1f) | uVar30;
            *(uint *)(param_1 + 0x25c) = iVar82 + (uint)bVar5;
          }
          else if ((int)local_fc <= iVar79) {
            uVar30 = *(uint *)(param_1 + 600);
            do {
              uVar29 = (uint)*(byte *)(param_1 + 0x680 + local_e8);
              uVar31 = (uint)*(ushort *)(iVar6 + (int)local_fc * 2);
              local_58 = *(uint **)(param_1 + ((uVar29 + 0x26) * 0x102 + uVar31) * 4);
              bVar5 = *(byte *)((uVar29 + 0x92) * 0x102 + uVar31 + param_1);
              local_44 = (void *)(uint)bVar5;
              iVar102 = *(int *)(param_1 + 0x25c);
              while (7 < iVar102) {
                *(char *)(*(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x4c)) =
                     (char)(uVar30 >> 0x18);
                iVar102 = *(int *)(param_1 + 0x25c) + -8;
                *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
                uVar30 = *(int *)(param_1 + 600) << 8;
                *(uint *)(param_1 + 600) = uVar30;
                *(int *)(param_1 + 0x25c) = iVar102;
              }
              local_fc = (undefined1 *)((int)local_fc + 1);
              uVar30 = (int)local_58 << ((' ' - bVar5) - (char)iVar102 & 0x1f) | uVar30;
              *(uint *)(param_1 + 600) = uVar30;
              *(int *)(param_1 + 0x25c) = iVar102 + (int)local_44;
            } while ((int)local_fc <= iVar79);
          }
          local_fc = (undefined1 *)(iVar79 + 1);
          iVar102 = *(int *)(param_1 + 0x274);
          iVar79 = local_e8 + 1;
          local_e8 = iVar79;
        } while ((int)local_fc < iVar102);
      }
      if (iVar79 != local_e0) {
        guard_check_icall();
        return;
      }
      return;
    }
  } while( true );
}


