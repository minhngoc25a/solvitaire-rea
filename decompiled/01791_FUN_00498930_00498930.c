// Function: FUN_00498930
// Entry: 00498930
// Size: 1796 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_00498930(int param_1,uint *param_2,int *param_3,int param_4,int param_5,UINT param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined6 uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  uint *puVar6;
  int *piVar7;
  ushort uVar8;
  __acrt_ptd *p_Var9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  undefined4 uVar13;
  uint *puVar14;
  short sVar15;
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined8 uVar31;
  void *pvVar32;
  size_t sVar33;
  int iVar34;
  char *pcVar35;
  uint *local_10;
  uint *local_c;
  uint *local_8;
  int local_4;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 uVar22;
  undefined2 uVar23;
  
  piVar7 = param_3;
  puVar6 = param_2;
  local_4 = -1;
  puVar12 = &DAT_00518bd0;
  puVar14 = param_2;
  for (iVar11 = 0x80; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar13 = 0;
  iVar11 = FUN_0048ca80(param_3,(int *)&local_c,(int *)&param_2,param_6);
  if (iVar11 != 0) {
    p_Var9 = FUN_0042470e();
    if (*(int *)p_Var9 == 0xc) {
      pcVar35 = "Can\'t allocate memory for Pathname";
      goto LAB_00498984;
    }
    FUN_0048d2b0(param_6);
    FUN_00487380(param_1,0x2a,0x524f64);
    uVar13 = 0xffffffec;
  }
  if (param_2 < (uint *)0x65) {
    FUN_0044c490(puVar6,local_c,(uint)param_2);
  }
  else {
    local_10 = FUN_004810c0((uint *)((int)local_c + (int)param_2 + -0x65),'/');
    if (local_10 == local_c) {
      local_8 = local_10;
      local_10 = FUN_004810c0((uint *)((int)local_10 + 1),'/');
    }
    local_8 = local_10;
    if (((local_10 == (uint *)0x0) || (*(char *)((int)local_10 + 1) == '\0')) ||
       ((uint *)((int)local_c + 0x9bU) < local_10)) {
      FUN_00487380(param_1,0x26,0x52678c);
      uVar13 = 0xffffffe7;
    }
    else {
      FUN_0044c490((uint *)((int)puVar6 + 0x159),local_c,(int)local_10 - (int)local_c);
      FUN_0044c490(puVar6,(uint *)((int)local_8 + 1),
                   (int)local_c + (int)param_2 + (-1 - (int)local_10));
    }
  }
  iVar11 = FUN_0048ca30(piVar7,(int *)&local_10,(int *)&param_2,param_6);
  if (iVar11 != 0) {
    p_Var9 = FUN_0042470e();
    if (*(int *)p_Var9 != 0xc) {
      FUN_0048d2b0(param_6);
      FUN_00487380(param_1,0x2a,0x524f40);
      uVar13 = 0xffffffec;
      goto LAB_00498ac1;
    }
LAB_00498af9:
    pcVar35 = "Can\'t allocate memory for Linkname";
LAB_00498984:
    FUN_00487380(param_1,0xc,(int)pcVar35);
    return 0xffffffe2;
  }
LAB_00498ac1:
  if (param_2 == (uint *)0x0) {
    iVar11 = FUN_0048cab0(piVar7,(int *)&local_10,(int *)&param_2,param_6);
    if (iVar11 != 0) {
      p_Var9 = FUN_0042470e();
      if (*(int *)p_Var9 == 0xc) goto LAB_00498af9;
      FUN_0048d2b0(param_6);
      FUN_00487380(param_1,0x2a,0x524f40);
      uVar13 = 0xffffffec;
    }
  }
  else {
    local_4 = 0x31;
  }
  if (param_2 != (uint *)0x0) {
    if ((uint *)0x64 < param_2) {
      FUN_00487380(param_1,0x26,0x52673c);
      uVar13 = 0xffffffe7;
      param_2 = (uint *)0x64;
    }
    FUN_0044c490((uint *)((int)puVar6 + 0x9d),local_10,(uint)param_2);
  }
  iVar11 = FUN_0048cb00(piVar7,(int *)&local_10,(int *)&param_2,param_6);
  if (iVar11 != 0) {
    p_Var9 = FUN_0042470e();
    if (*(int *)p_Var9 == 0xc) {
      pcVar35 = "Can\'t allocate memory for Uname";
      goto LAB_00498984;
    }
    FUN_0048d2b0(param_6);
    FUN_00487380(param_1,0x2a,0x524f1c);
    uVar13 = 0xffffffec;
  }
  if (param_2 != (uint *)0x0) {
    if ((uint *)0x20 < param_2) {
      if (param_4 != 0x78) {
        FUN_00487380(param_1,0xffffffff,0x526778);
        uVar13 = 0xffffffe7;
      }
      param_2 = (uint *)0x20;
    }
    FUN_0044c490((uint *)((int)puVar6 + 0x109),local_10,(uint)param_2);
  }
  iVar11 = FUN_0048ca00(piVar7,(int *)&local_10,(int *)&param_2,param_6);
  if (iVar11 != 0) {
    p_Var9 = FUN_0042470e();
    if (*(int *)p_Var9 == 0xc) {
      pcVar35 = "Can\'t allocate memory for Gname";
      goto LAB_00498984;
    }
    FUN_0048d2b0(param_6);
    FUN_00487380(param_1,0x2a,0x524fac);
    uVar13 = 0xffffffec;
  }
  if (param_2 != (uint *)0x0) {
    local_8 = (uint *)((int)local_10 + 1);
    puVar12 = local_10;
    do {
      uVar10 = *puVar12;
      puVar12 = (uint *)((int)puVar12 + 1);
    } while ((char)uVar10 != '\0');
    if (0x20 < (uint)((int)puVar12 - (int)local_8)) {
      if (param_4 != 0x78) {
        FUN_00487380(param_1,0xffffffff,0x5267a0);
        uVar13 = 0xffffffe7;
      }
      param_2 = (uint *)0x20;
    }
    FUN_0044c490((uint *)((int)puVar6 + 0x129),local_10,(uint)param_2);
  }
  puVar12 = puVar6 + 0x19;
  iVar34 = 8;
  sVar33 = 6;
  iVar11 = param_5;
  uVar8 = FUN_0048bfb0((int)piVar7);
  iVar11 = FUN_00499510((uint)(uVar8 & 0xfff),0,puVar12,sVar33,iVar34,iVar11);
  if (iVar11 != 0) {
    FUN_00487380(param_1,0x22,0x5274f8);
    uVar13 = 0xffffffe7;
  }
  puVar12 = puVar6 + 0x1b;
  iVar34 = 8;
  sVar33 = 6;
  iVar11 = param_5;
  uVar31 = FUN_0048c250((int)piVar7);
  iVar11 = FUN_00499510((uint)uVar31,(int)((ulonglong)uVar31 >> 0x20),puVar12,sVar33,iVar34,iVar11);
  if (iVar11 != 0) {
    FUN_00487380(param_1,0x22,0x527550);
    uVar13 = 0xffffffe7;
  }
  puVar12 = puVar6 + 0x1d;
  iVar34 = 8;
  sVar33 = 6;
  iVar11 = param_5;
  uVar31 = FUN_0048bea0((int)piVar7);
  iVar11 = FUN_00499510((uint)uVar31,(int)((ulonglong)uVar31 >> 0x20),puVar12,sVar33,iVar34,iVar11);
  if (iVar11 != 0) {
    FUN_00487380(param_1,0x22,0x52756c);
    uVar13 = 0xffffffe7;
  }
  puVar12 = puVar6 + 0x1f;
  iVar34 = 0xc;
  sVar33 = 0xb;
  iVar11 = param_5;
  uVar31 = FUN_0048c180((int)piVar7);
  iVar11 = FUN_00499510((uint)uVar31,(int)((ulonglong)uVar31 >> 0x20),puVar12,sVar33,iVar34,iVar11);
  if (iVar11 != 0) {
    FUN_00487380(param_1,0x22,0x5275d0);
    uVar13 = 0xffffffe7;
  }
  puVar12 = puVar6 + 0x22;
  iVar34 = 0xb;
  sVar33 = 0xb;
  iVar11 = param_5;
  uVar31 = FUN_0048bfc0((int)piVar7);
  iVar11 = FUN_00499510((uint)uVar31,(int)((ulonglong)uVar31 >> 0x20),puVar12,sVar33,iVar34,iVar11);
  if (iVar11 != 0) {
    FUN_00487380(param_1,0x22,0x5274d4);
    uVar13 = 0xffffffe7;
  }
  uVar10 = FUN_0048bcc0((int)piVar7);
  if (((short)uVar10 == 0x6000) || (uVar10 = FUN_0048bcc0((int)piVar7), (short)uVar10 == 0x2000)) {
    pvVar32 = (void *)((int)puVar6 + 0x149);
    iVar34 = 8;
    sVar33 = 6;
    iVar11 = param_5;
    uVar10 = FUN_0048c140((int)piVar7);
    iVar11 = FUN_00499510(uVar10,0,pvVar32,sVar33,iVar34,iVar11);
    if (iVar11 != 0) {
      FUN_00487380(param_1,0x22,0x5274b4);
      uVar13 = 0xffffffe7;
    }
    pvVar32 = (void *)((int)puVar6 + 0x151);
    iVar34 = 8;
    sVar33 = 6;
    iVar11 = param_5;
    uVar10 = FUN_0048c160((int)piVar7);
    iVar11 = FUN_00499510(uVar10,0,pvVar32,sVar33,iVar34,iVar11);
    if (iVar11 != 0) {
      FUN_00487380(param_1,0x22,0x527494);
      uVar13 = 0xffffffe7;
    }
  }
  if (param_4 < 0) {
    if (local_4 < 0) {
      uVar10 = FUN_0048bcc0((int)piVar7);
      uVar8 = (ushort)uVar10;
      if (uVar8 < 0x6001) {
        if (uVar8 == 0x6000) {
          *(undefined1 *)(puVar6 + 0x27) = 0x34;
          goto LAB_00498f2a;
        }
        if (uVar8 == 0x1000) {
          *(undefined1 *)(puVar6 + 0x27) = 0x36;
          goto LAB_00498f2a;
        }
        if (uVar8 == 0x2000) {
          *(undefined1 *)(puVar6 + 0x27) = 0x33;
          goto LAB_00498f2a;
        }
        if (uVar8 == 0x4000) {
          *(undefined1 *)(puVar6 + 0x27) = 0x35;
          goto LAB_00498f2a;
        }
      }
      else {
        if (uVar8 == 0x8000) {
          *(undefined1 *)(puVar6 + 0x27) = 0x30;
          goto LAB_00498f2a;
        }
        if (uVar8 == 0xa000) {
          *(undefined1 *)(puVar6 + 0x27) = 0x32;
          goto LAB_00498f2a;
        }
      }
      FUN_00499640(param_1,piVar7);
      uVar13 = 0xffffffe7;
    }
    else {
      *(char *)(puVar6 + 0x27) = (char)local_4;
    }
  }
  else {
    *(char *)(puVar6 + 0x27) = (char)param_4;
  }
LAB_00498f2a:
  iVar11 = 0;
  iVar34 = 0;
  iVar24 = 0;
  iVar25 = 0;
  iVar26 = 0;
  iVar27 = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar30 = 0;
  do {
    uVar1 = *(undefined4 *)((int)puVar6 + iVar11);
    uVar22 = (undefined1)((uint)uVar1 >> 0x18);
    uVar23 = CONCAT11(uVar22,uVar22);
    uVar22 = (undefined1)((uint)uVar1 >> 0x10);
    uVar31 = CONCAT35(CONCAT21(uVar23,uVar22),CONCAT14(uVar22,uVar1));
    uVar22 = (undefined1)((uint)uVar1 >> 8);
    uVar3 = CONCAT51(CONCAT41((int)((ulonglong)uVar31 >> 0x20),uVar22),uVar22);
    sVar15 = CONCAT11((char)uVar1,(char)uVar1);
    uVar2 = CONCAT62(uVar3,sVar15);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar2;
    auVar18._12_2_ = uVar23;
    auVar18._14_2_ = uVar23;
    uVar23 = (undefined2)((ulonglong)uVar31 >> 0x20);
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._8_2_ = 0;
    auVar17._0_8_ = uVar2;
    auVar17._10_2_ = uVar23;
    auVar16._10_6_ = auVar17._10_6_;
    auVar16._8_2_ = uVar23;
    auVar16._0_8_ = uVar2;
    uVar23 = (undefined2)uVar3;
    auVar4._4_8_ = auVar16._8_8_;
    auVar4._2_2_ = uVar23;
    auVar4._0_2_ = uVar23;
    iVar34 = iVar34 + ((int)sVar15 >> 8 & _DAT_0050db40);
    iVar24 = iVar24 + (auVar4._0_4_ >> 0x18 & _UNK_0050db44);
    iVar25 = iVar25 + (auVar16._8_4_ >> 0x18 & _UNK_0050db48);
    iVar26 = iVar26 + (auVar17._12_4_ >> 0x18 & _UNK_0050db4c);
    uVar1 = *(undefined4 *)((int)puVar6 + iVar11 + 4);
    uVar22 = (undefined1)((uint)uVar1 >> 0x18);
    uVar23 = CONCAT11(uVar22,uVar22);
    uVar22 = (undefined1)((uint)uVar1 >> 0x10);
    uVar31 = CONCAT35(CONCAT21(uVar23,uVar22),CONCAT14(uVar22,uVar1));
    uVar22 = (undefined1)((uint)uVar1 >> 8);
    uVar3 = CONCAT51(CONCAT41((int)((ulonglong)uVar31 >> 0x20),uVar22),uVar22);
    sVar15 = CONCAT11((char)uVar1,(char)uVar1);
    uVar2 = CONCAT62(uVar3,sVar15);
    iVar11 = iVar11 + 8;
    auVar21._8_4_ = 0;
    auVar21._0_8_ = uVar2;
    auVar21._12_2_ = uVar23;
    auVar21._14_2_ = uVar23;
    uVar23 = (undefined2)((ulonglong)uVar31 >> 0x20);
    auVar20._12_4_ = auVar21._12_4_;
    auVar20._8_2_ = 0;
    auVar20._0_8_ = uVar2;
    auVar20._10_2_ = uVar23;
    auVar19._10_6_ = auVar20._10_6_;
    auVar19._8_2_ = uVar23;
    auVar19._0_8_ = uVar2;
    uVar23 = (undefined2)uVar3;
    auVar5._4_8_ = auVar19._8_8_;
    auVar5._2_2_ = uVar23;
    auVar5._0_2_ = uVar23;
    iVar27 = iVar27 + ((int)sVar15 >> 8 & _DAT_0050db40);
    iVar28 = iVar28 + (auVar5._0_4_ >> 0x18 & _UNK_0050db44);
    iVar29 = iVar29 + (auVar19._8_4_ >> 0x18 & _UNK_0050db48);
    iVar30 = iVar30 + (auVar20._12_4_ >> 0x18 & _UNK_0050db4c);
  } while (iVar11 < 0x200);
  *(undefined1 *)((int)puVar6 + 0x9a) = 0;
  uVar10 = iVar27 + iVar34 + iVar29 + iVar25 + iVar28 + iVar24 + iVar30 + iVar26;
  *(byte *)((int)puVar6 + 0x99) = ((byte)uVar10 & 7) + 0x30;
  *(byte *)(puVar6 + 0x26) = ((byte)(uVar10 >> 3) & 7) + 0x30;
  *(byte *)((int)puVar6 + 0x97) = ((byte)(uVar10 >> 6) & 7) + 0x30;
  *(byte *)((int)puVar6 + 0x96) = ((byte)(uVar10 >> 9) & 7) + 0x30;
  *(byte *)((int)puVar6 + 0x95) = ((byte)(uVar10 >> 0xc) & 7) + 0x30;
  *(byte *)(puVar6 + 0x25) = ((byte)(uVar10 >> 0xf) & 7) + 0x30;
  if (uVar10 >> 0x12 != 0) {
    puVar6[0x25] = 0x37373737;
    *(undefined2 *)(puVar6 + 0x26) = 0x3737;
  }
  return uVar13;
}


