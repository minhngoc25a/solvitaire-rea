// Function: FUN_00492060
// Entry: 00492060
// Size: 1050 bytes
// Thunk: false
// External: false


char * __cdecl FUN_00492060(ushort *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  ushort uVar5;
  char cVar6;
  ushort *puVar7;
  __acrt_ptd *p_Var8;
  int iVar9;
  ushort *puVar10;
  ushort *puVar11;
  char *pcVar12;
  char *pcVar13;
  ushort *puVar14;
  uint uVar15;
  uint uVar16;
  int local_20;
  char *local_14;
  ushort *local_10;
  char *local_c;
  char *local_8;
  SIZE_T local_4;
  
  puVar14 = param_1;
  if ((*(uint *)(param_1 + 0xc) & 0x3c00) == 0) {
    uVar16 = param_3 & 0x100 | 0x200;
    if ((param_3 & 0x200) == 0) {
      uVar16 = param_3 & 0x100;
    }
    if (uVar16 == 0) {
      uVar16 = 0x300;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xc) & 0x300) != 0) {
      return (char *)0x0;
    }
    uVar16 = 0x3c00;
  }
  uVar15 = param_3 | 2;
  if (uVar16 != 0x300) {
    uVar15 = param_3;
  }
  local_4 = FUN_00492f70((short *)param_1,uVar16,uVar15,0,0,(UINT)param_4);
  if (local_4 != 0) {
    cVar6 = (-((uVar15 & 8) != 0) & 0x22U) + 10;
    puVar7 = (ushort *)FUN_00482949(local_4);
    param_1 = puVar7;
    if (puVar7 != (ushort *)0x0) {
      local_20 = 0;
      if ((uVar16 & 0x100) != 0) {
        uVar2 = *puVar14;
        *(undefined4 *)puVar7 = DAT_005253dc;
        *(char *)(puVar7 + 2) = DAT_005253e0;
        puVar11 = puVar7;
        do {
          puVar10 = puVar11;
          puVar11 = (ushort *)((int)puVar10 + 1);
        } while ((char)*puVar10 != '\0');
        *(char *)puVar10 = ':';
        *(char *)((int)puVar10 + 1) = ':';
        *(byte *)(puVar10 + 1) = (-((uVar2 & 0x100) != 0) & 0x45U) + 0x2d;
        *(byte *)((int)puVar10 + 3) = (-((uVar2 & 0x80) != 0) & 0x4aU) + 0x2d;
        *(byte *)(puVar10 + 2) = (-((uVar2 & 0x40) != 0) & 0x4bU) + 0x2d;
        *(char *)((int)puVar10 + 5) = cVar6;
        local_10 = puVar10 + 3;
        uVar2 = *puVar14;
        *(undefined4 *)local_10 = s_group_00525750._0_4_;
        puVar10[5] = s_group_00525750._4_2_;
        puVar11 = local_10;
        do {
          uVar5 = *puVar11;
          puVar11 = (ushort *)((int)puVar11 + 1);
        } while ((char)uVar5 != '\0');
        local_c = (char *)((int)local_10 + ((int)puVar11 - (int)((int)puVar10 + 7)));
        *local_c = ':';
        local_c[1] = ':';
        local_c[2] = (-((uVar2 & 0x20) != 0) & 0x45U) + 0x2d;
        local_c[3] = (-((uVar2 & 0x10) != 0) & 0x4aU) + 0x2d;
        local_c[4] = (-((uVar2 & 8) != 0) & 0x4bU) + 0x2d;
        local_c[5] = cVar6;
        pcVar12 = local_c + 6;
        uVar2 = *puVar14;
        *(undefined4 *)pcVar12 = s_other_00525414._0_4_;
        *(undefined2 *)(local_c + 10) = s_other_00525414._4_2_;
        local_c = local_c + 7;
        pcVar13 = pcVar12;
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        pcVar12 = pcVar12 + ((int)pcVar13 - (int)local_c);
        *pcVar12 = ':';
        pcVar13 = pcVar12 + 1;
        if ((uVar15 & 4) == 0) {
          *pcVar13 = ':';
          pcVar13 = pcVar12 + 2;
        }
        local_20 = 3;
        *pcVar13 = (-((uVar2 & 4) != 0) & 0x45U) + 0x2d;
        pcVar13[1] = (-((uVar2 & 2) != 0) & 0x4aU) + 0x2d;
        pcVar13[2] = (-((uVar2 & 1) != 0) & 0x4bU) + 0x2d;
        param_1 = (ushort *)(pcVar13 + 3);
      }
      puVar3 = *(undefined4 **)(puVar14 + 2);
      pcVar13 = local_c;
      do {
        local_c = pcVar13;
        if (puVar3 == (undefined4 *)0x0) {
          *(undefined1 *)param_1 = 0;
          param_1 = (ushort *)((int)param_1 + 1);
          puVar14 = puVar7;
          do {
            uVar2 = *puVar14;
            puVar14 = (ushort *)((int)puVar14 + 1);
          } while ((char)uVar2 != '\0');
          local_c = (char *)((int)puVar14 - (int)((int)puVar7 + 1));
          if ((int)(local_4 - 1) < (int)local_c) {
            local_14 = local_c;
            local_c = pcVar13;
            FUN_004873c0(1,"Buffer overrun");
          }
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = local_c;
          }
          return (char *)puVar7;
        }
        uVar4 = puVar3[1];
        if (((uVar16 & uVar4) != 0) &&
           ((uVar4 != 0x100 ||
            (((iVar9 = puVar3[2], iVar9 != 0x2712 && (iVar9 != 0x2714)) && (iVar9 != 0x2716)))))) {
          if ((uVar4 == 0x200) && ((uVar15 & 2) != 0)) {
            pcVar13 = "default:";
          }
          else {
            pcVar13 = (char *)0x0;
          }
          iVar9 = FUN_0048dba0(0,puVar3 + 5,(int *)&local_8,(int *)&local_14,(UINT)param_4);
          if (iVar9 != 0) {
            FUN_0047d191(puVar7);
            return (char *)0x0;
          }
          if (0 < local_20) {
            *(char *)param_1 = cVar6;
            param_1 = (ushort *)((int)param_1 + 1);
          }
          if ((local_8 == (char *)0x0) || ((uVar15 & 1) != 0)) {
            iVar9 = puVar3[4];
          }
          else {
            iVar9 = -1;
          }
          FUN_004933f0((int *)&param_1,pcVar13,puVar3[1],puVar3[2],uVar15,local_8,puVar3[3],iVar9);
          local_20 = local_20 + 1;
        }
        puVar3 = (undefined4 *)*puVar3;
        pcVar13 = local_c;
      } while( true );
    }
    p_Var8 = FUN_0042470e();
    if (*(int *)p_Var8 == 0xc) {
      FUN_004873c0(1,"No memory");
    }
  }
  return (char *)0x0;
}


