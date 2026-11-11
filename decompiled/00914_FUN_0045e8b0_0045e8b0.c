// Function: FUN_0045e8b0
// Entry: 0045e8b0
// Size: 5766 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0045fc9d) */
/* WARNING: Removing unreachable block (ram,0x0045f708) */
/* WARNING: Removing unreachable block (ram,0x0045ef98) */
/* WARNING: Removing unreachable block (ram,0x0045f57d) */
/* WARNING: Removing unreachable block (ram,0x0045fc75) */
/* WARNING: Removing unreachable block (ram,0x0045fd17) */

char * __cdecl
FUN_0045e8b0(undefined1 (**param_1) [16],int *param_2,undefined1 (**param_3) [16],int *param_4,
            undefined4 param_5,int *param_6)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  char acVar5 [4];
  char acVar6 [4];
  char acVar7 [4];
  ushort uVar8;
  int *piVar9;
  int iVar10;
  __acrt_ptd *p_Var11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  int iVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint *puVar20;
  char *pcVar21;
  char *pcVar22;
  undefined1 (**unaff_EBX) [16];
  uint **unaff_EBP;
  int *piVar23;
  undefined1 (**ppauVar24) [16];
  bool bVar25;
  undefined8 uVar26;
  longlong lVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined2 uVar30;
  undefined1 (**ppauVar31) [16];
  undefined4 uVar32;
  int *piVar33;
  UINT local_7a0;
  char *local_79c;
  undefined1 (**local_798) [16];
  undefined1 (*local_794) [16];
  uint *puStack_790;
  uint *puStack_78c;
  char *pcStack_788;
  int iStack_784;
  undefined1 (*local_780) [16];
  int local_77c;
  undefined8 local_778;
  undefined1 (**ppauStack_770) [16];
  undefined1 (**ppauStack_76c) [16];
  int iStack_768;
  uint *local_764;
  uint local_760;
  uint *local_75c;
  uint *puStack_758;
  uint uStack_754;
  uint uStack_750;
  uint uStack_74c;
  char *pcStack_748;
  undefined4 local_744;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  char acStack_738 [4];
  uint uStack_734;
  char acStack_730 [56];
  uint uStack_6f8;
  char acStack_6f4 [4];
  char acStack_6f0 [4];
  char acStack_6ec [4];
  char acStack_6e8 [2];
  char cStack_6e6;
  char cStack_6e5;
  char cStack_6e4;
  uint uStack_5f8;
  char acStack_5f4 [4];
  char acStack_5f0 [4];
  char acStack_5ec [4];
  char acStack_5e8 [240];
  char acStack_4f8 [264];
  uint auStack_3f0 [126];
  uint auStack_1f8 [126];
  
  pauVar4 = param_1[0x29];
  local_794 = (undefined1 (*) [16])0x0;
  local_760 = 0;
  local_764 = (uint *)0x0;
  piVar33 = (int *)0x0;
  uVar32 = 0;
  piVar9 = FUN_0048c000(param_2);
  if (piVar9 == (int *)0x0) {
    FUN_00487380((int)param_1,0xffffffff,0x526ee0);
    return (char *)0xffffffe7;
  }
  if (*(int *)(pauVar4[4] + 4) == 0) {
    local_7a0 = *(UINT *)pauVar4[4];
    if (local_7a0 == 0) {
      local_7a0 = FUN_0048d020((int)param_1,&DAT_005297a0,1);
      *(UINT *)pauVar4[4] = local_7a0;
      if (local_7a0 == 0) {
        return (char *)0xffffffe7;
      }
    }
  }
  else {
    local_7a0 = 0;
  }
  iVar10 = FUN_0048ca30(param_2,(int *)&local_798,(int *)&local_75c,local_7a0);
  if (iVar10 != 0) {
    p_Var11 = FUN_0042470e();
    if (*(int *)p_Var11 == 0xc) {
      FUN_00487380((int)param_1,0xc,0x526e8c);
      return (char *)0xffffffe2;
    }
    iVar10 = FUN_00460990((int)param_1,param_2,(int *)&local_798,(int *)&local_75c,0);
    if (iVar10 == -0x1e) {
      return (char *)0xffffffe2;
    }
    FUN_0048d2b0(local_7a0);
    FUN_00487380((int)param_1,0x2a,0x524f40);
    piVar33 = (int *)0xffffffec;
    local_7a0 = 0;
  }
  if (local_798 == (undefined1 (**) [16])0x0) {
    uVar12 = FUN_0048bcc0((int)param_2);
    uVar8 = (ushort)uVar12;
    if (uVar8 < 0x6001) {
      if ((uVar8 != 0x6000) && ((uVar8 != 0x1000 && (uVar8 != 0x2000)))) {
        if (uVar8 != 0x4000) goto LAB_0045ecf6;
        puVar13 = (uint *)FUN_0048c0b0(param_2);
        if (puVar13 != (uint *)0x0) {
          puVar19 = puVar13;
          do {
            uVar12 = *puVar19;
            puVar19 = (uint *)((int)puVar19 + 2);
          } while ((short)uVar12 != 0);
          if (*(short *)((int)puVar13 + ((int)puVar19 - ((int)puVar13 + 2) >> 1) * 2 + -2) != 0x2f)
          {
            local_780 = (undefined1 (*) [16])0x0;
            local_77c = 0;
            local_778 = local_778 & 0xffffffff00000000;
            puVar19 = puVar13;
            do {
              uVar12 = *puVar19;
              puVar19 = (uint *)((int)puVar19 + 2);
            } while ((short)uVar12 != 0);
            local_79c = (char *)((int)puVar19 - ((int)puVar13 + 2) >> 1);
            iVar10 = FUN_0048d560((int *)&local_780,(int)(local_79c + 2));
            if (iVar10 == 0) {
              FUN_00487380((int)param_1,0xc,0x5286d4);
              FUN_0048d710(&local_780);
              return (char *)0xffffffe2;
            }
            if (*(short *)((int)puVar13 + (int)local_79c * 2 + -2) == 0x5c) {
              local_79c = local_79c + -1;
            }
            local_77c = 0;
            FUN_0048d5e0((int *)&local_780,puVar13,(uint)local_79c);
            FUN_0048cf50((int *)&local_780,0x2f);
            FUN_0048c720((int)param_2,(uint *)local_780);
            FUN_0048d710((undefined4 *)&local_778);
            goto LAB_0045eb2a;
          }
        }
        puVar13 = (uint *)FUN_0048c000(param_2);
        if ((puVar13 != (uint *)0x0) && (puVar19 = puVar13, (char)*puVar13 != '\0')) {
          do {
            puVar20 = puVar19;
            puVar19 = (uint *)((int)puVar20 + 1);
          } while ((char)*puVar20 != '\0');
          if (*(char *)((int)puVar20 + -1) != '/') {
            local_780 = (undefined1 (*) [16])0x0;
            local_77c = 0;
            local_778 = local_778 & 0xffffffff00000000;
            puVar19 = puVar13;
            do {
              uVar12 = *puVar19;
              puVar19 = (uint *)((int)puVar19 + 1);
            } while ((char)uVar12 != '\0');
            local_79c = (char *)((int)puVar19 - ((int)puVar13 + 1));
            piVar9 = FUN_0048d4d0((int *)&local_780,local_79c + 2);
            puVar19 = puVar13;
            if (piVar9 == (int *)0x0) {
              FUN_00487380((int)param_1,0xc,0x5286d4);
              FUN_0048d710(&local_780);
              return (char *)0xffffffe2;
            }
            do {
              puVar20 = puVar19;
              puVar19 = (uint *)((int)puVar20 + 1);
            } while ((char)*puVar20 != '\0');
            if (*(char *)((int)puVar20 + -1) == '\\') {
              local_79c = local_79c + -1;
            }
            else {
              local_77c = 0;
              FUN_0048d570((int *)&local_780,puVar13,(uint)local_79c);
            }
            FUN_0048cf00((int *)&local_780,0x2f);
            FUN_0048c710((int)param_2,(uint *)local_780);
            FUN_0048d710((undefined4 *)&local_778);
          }
        }
      }
    }
    else if ((uVar8 != 0x8000) && (uVar8 != 0xa000)) {
LAB_0045ecf6:
      FUN_00499640((int)param_1,param_2);
      return (char *)0xffffffe7;
    }
  }
LAB_0045eb2a:
  pcStack_788 = (char *)FUN_0048c940((int)param_2,&uStack_73c);
  if (pcStack_788 != (char *)0x0) {
    ppauStack_76c = (undefined1 (**) [16])FUN_0048bb80(param_1,unaff_EBP,unaff_EBX);
    piVar14 = FUN_0048c000(param_2);
    piVar9 = piVar14;
    do {
      iVar10 = *piVar9;
      piVar9 = (int *)((int)piVar9 + 1);
    } while ((char)iVar10 != '\0');
    local_780 = (undefined1 (*) [16])FUN_00482949((SIZE_T)((int)piVar9 + (3 - ((int)piVar14 + 1))));
    if ((local_780 == (undefined1 (*) [16])0x0) || (ppauStack_76c == (undefined1 (**) [16])0x0)) {
      FUN_0048ba90(ppauStack_76c);
      FUN_0047d191(local_780);
      return (char *)0xffffffe7;
    }
    piVar23 = piVar14;
    do {
      iVar10 = *piVar23;
      piVar23 = (int *)((int)piVar23 + 1);
      *(char *)((int)local_780 + (-1 - (int)piVar14) + (int)piVar23) = (char)iVar10;
    } while ((char)iVar10 != '\0');
    pauVar15 = FUN_00480570(local_780,0x2f);
    pauVar16 = local_780;
    if (pauVar15 != (undefined1 (*) [16])0x0) {
LAB_0045ebb3:
      pauVar16 = local_780;
      puVar13 = (uint *)(*pauVar15 + 1);
      if ((*pauVar15)[1] == '\0') goto code_r0x0045ebc0;
      puVar19 = puVar13;
      do {
        uVar12 = *puVar19;
        puVar19 = (uint *)((int)puVar19 + 1);
      } while ((char)uVar12 != '\0');
      FUN_0044c490((uint *)(*pauVar15 + 3),puVar13,(int)puVar19 + (1 - (int)(*pauVar15 + 2)));
      *(undefined2 *)puVar13 = 0x5f2e;
      pauVar16 = local_780;
      goto LAB_0045ed5f;
    }
LAB_0045ed49:
    FUN_0044c490((uint *)(*pauVar16 + 2),(uint *)pauVar16,
                 (uint)((int)piVar9 + (1 - ((int)piVar14 + 1))));
    *(undefined2 *)*pauVar16 = 0x5f2e;
LAB_0045ed5f:
    ppauVar24 = ppauStack_76c;
    FUN_0048c710((int)ppauStack_76c,(uint *)pauVar16);
    FUN_0047d191(pauVar16);
    FUN_0048c7c0((int)ppauVar24,SUB84(_acStack_738,4),0);
    FUN_0048c4b0((int)ppauVar24,0x8000);
    uVar12 = FUN_0048c0f0((int)param_6);
    FUN_0048c730((int)ppauVar24,(ushort)uVar12);
    iVar10 = FUN_0048bfd0((int)param_6);
    uVar26 = FUN_0048bfc0((int)param_6);
    FUN_0048c650((int)ppauVar24,(uint)uVar26,(int)((ulonglong)uVar26 >> 0x20),iVar10);
    uVar26 = FUN_0048bea0((int)param_6);
    FUN_0048c520((int)ppauVar24,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    puVar13 = (uint *)FUN_0048beb0(param_6);
    FUN_0048c540((int)ppauVar24,puVar13);
    uVar26 = FUN_0048c250((int)param_6);
    FUN_0048c8b0((int)ppauVar24,(int)uVar26,(int)((ulonglong)uVar26 >> 0x20));
    puVar13 = (uint *)FUN_0048c260(param_6);
    ppauVar31 = ppauVar24;
    FUN_0048c8d0((int)ppauVar24,puVar13);
    pauVar16 = (undefined1 (*) [16])
               FUN_0045e8b0(param_1,(int *)ppauVar24,ppauVar31,(int *)puVar13,uVar32,piVar33);
    FUN_0048ba90(ppauVar24);
    if ((int)pauVar16 < -0x14) {
      return (char *)pauVar16;
    }
    pauVar15 = local_794;
    if ((int)pauVar16 < (int)local_794) {
      pauVar15 = pauVar16;
    }
    pauVar16 = (undefined1 (*) [16])FUN_0045e6a0((int)param_1,(int)local_780,uStack_734);
    if ((int)pauVar16 < -0x14) {
      return (char *)pauVar16;
    }
    if ((int)pauVar16 < (int)pauVar15) {
      pauVar15 = pauVar16;
    }
    unaff_EBP = (uint **)0x45ee4e;
    unaff_EBX = param_1;
    local_794 = pauVar15;
    pauVar16 = (undefined1 (*) [16])FUN_0045e830((int)param_1);
    if ((int)pauVar16 < -0x14) {
      return (char *)pauVar16;
    }
    param_2 = param_6;
    if ((int)pauVar16 < (int)pauVar15) {
      local_794 = pauVar16;
    }
  }
  piVar9 = FUN_00497d00(param_2);
  if (piVar9 == param_4) {
    piVar9 = FUN_0048b800(param_4);
  }
  if (piVar9 == (int *)0x0) {
    FUN_00487380((int)param_1,0xc,0x5286d4);
    return (char *)0xffffffe2;
  }
  *(undefined4 *)pauVar4[2] = 0;
  *(undefined4 *)(pauVar4[2] + 0xc) = 0;
  local_778._0_4_ = (undefined1 (**) [16])0x0;
  local_778._4_4_ = (undefined1 (*) [16])0x0;
  FUN_00460550((int)pauVar4);
  if ((puStack_790 == (uint *)0x0) && (uVar12 = FUN_0048bcc0((int)piVar9), (short)uVar12 == -0x8000)
     ) {
    local_780 = (undefined1 (*) [16])FUN_00493c40((int)piVar9);
    if (local_780 != (undefined1 (*) [16])0x0) {
      ppauStack_76c = (undefined1 (**) [16])0x0;
      iStack_768 = 0;
      iVar17 = FUN_00493cc0((int)piVar9,&local_780,&pcStack_788);
      iVar10 = iStack_768;
      while (iVar17 == 0) {
        ppauStack_76c = (undefined1 (**) [16])(pcStack_788 + (int)*local_780);
        iVar10 = local_77c + iStack_784 + (uint)CARRY4((uint)local_780,(uint)pcStack_788);
        iVar17 = FUN_00493cc0((int)piVar9,&local_780,&pcStack_788);
      }
      lVar27 = FUN_0048c180((int)piVar9);
      if (CONCAT44(iVar10,ppauStack_76c) < lVar27) {
        iVar10 = 0;
        uVar12 = 0;
        uVar26 = FUN_0048c180((int)piVar9);
        FUN_00493af0((int)piVar9,(uint)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar12,iVar10);
      }
      local_780 = (undefined1 (*) [16])FUN_00493c40((int)piVar9);
    }
  }
  else {
    local_780 = (undefined1 (*) [16])0x0;
  }
  ppauVar24 = local_798;
  iVar10 = FUN_004609e0((int)param_1,piVar9,(int *)&puStack_78c,(int *)&local_794,(UINT)local_798);
  if (iVar10 == -0x1e) goto LAB_0045ff1d;
  if (iVar10 != 0) {
    iVar10 = FUN_004609e0((int)param_1,piVar9,(int *)&puStack_78c,(int *)&local_794,0);
    if (iVar10 == -0x1e) goto LAB_0045ff1d;
    FUN_0048d2b0((int)ppauVar24);
    FUN_00487380((int)param_1,0x2a,0x524f64);
    local_79c = (char *)0xffffffec;
    ppauVar24 = (undefined1 (**) [16])0x0;
  }
  iVar10 = FUN_00460a30((int)param_1,piVar9,(int *)&puStack_758,(int *)&uStack_74c,(UINT)ppauVar24);
  if (iVar10 == -0x1e) goto LAB_0045ff1d;
  if (iVar10 != 0) {
    iVar10 = FUN_00460a30((int)param_1,piVar9,(int *)&puStack_758,(int *)&uStack_74c,0);
    if (iVar10 == -0x1e) goto LAB_0045ff1d;
    FUN_0048d2b0((int)ppauVar24);
    FUN_00487380((int)param_1,0x2a,0x524f1c);
    local_79c = (char *)0xffffffec;
    ppauVar24 = (undefined1 (**) [16])0x0;
  }
  iVar10 = FUN_00460a80((int)param_1,piVar9,(int *)&local_75c,(int *)&uStack_750,(UINT)ppauVar24);
  if (iVar10 == -0x1e) goto LAB_0045ff1d;
  if (iVar10 != 0) {
    iVar10 = FUN_00460a80((int)param_1,piVar9,(int *)&local_75c,(int *)&uStack_750,0);
    if (iVar10 == -0x1e) goto LAB_0045ff1d;
    FUN_0048d2b0((int)ppauVar24);
    FUN_00487380((int)param_1,0x2a,0x524fac);
    local_79c = (char *)0xffffffec;
    ppauVar24 = (undefined1 (**) [16])0x0;
  }
  local_764 = puStack_790;
  local_760 = uStack_754;
  if (puStack_790 == (uint *)0x0) {
    iVar10 = FUN_00460ad0((int)param_1,piVar9,(int *)&local_764,(int *)&local_760,(UINT)ppauVar24);
    if (iVar10 == -0x1e) goto LAB_0045ff1d;
    if (iVar10 == 0) goto LAB_0045f185;
    iVar10 = FUN_00460ad0((int)param_1,piVar9,(int *)&local_764,(int *)&local_760,0);
    if (iVar10 == -0x1e) goto LAB_0045ff1d;
    FUN_0048d2b0((int)ppauVar24);
    FUN_00487380((int)param_1,0x2a,0x524f40);
    local_79c = (char *)0xffffffec;
LAB_0045f18d:
    if (*(int *)(pauVar4[4] + 4) == 0) {
      if (puStack_790 != (uint *)0x0) {
        iVar10 = FUN_00460990((int)param_1,piVar9,(int *)&puStack_790,(int *)&uStack_754,0);
        if (iVar10 == -0x1e) goto LAB_0045ff1d;
        local_764 = puStack_790;
        local_760 = uStack_754;
      }
      iVar10 = FUN_004609e0((int)param_1,piVar9,(int *)&puStack_78c,(int *)&local_794,0);
      if (((iVar10 == -0x1e) ||
          (iVar10 = FUN_00460a30((int)param_1,piVar9,(int *)&puStack_758,(int *)&uStack_74c,0),
          iVar10 == -0x1e)) ||
         (iVar10 = FUN_00460a80((int)param_1,piVar9,(int *)&local_75c,(int *)&uStack_750,0),
         iVar10 == -0x1e)) {
LAB_0045ff1d:
        FUN_0048ba90(piVar9);
        return (char *)0xffffffe2;
      }
    }
    FUN_0045e3f0((int *)(pauVar4[1] + 0xc),(uint *)"hdrcharset",(uint *)"BINARY",6);
  }
  else {
LAB_0045f185:
    if (ppauVar24 == (undefined1 (**) [16])0x0) goto LAB_0045f18d;
  }
  if (puStack_78c == (uint *)0x0) {
LAB_0045f2aa:
    FUN_0045e3c0((int *)(pauVar4[1] + 0xc),(uint *)0x5266c8,puStack_78c);
    puVar13 = (uint *)FUN_00460290(acStack_4f8,(char *)puStack_78c,(char *)local_794,(char *)0x0);
    FUN_0048c710((int)piVar9,puVar13);
    local_798 = (undefined1 (**) [16])0x1;
  }
  else {
    bVar2 = (byte)*puStack_78c;
    puVar13 = puStack_78c;
    while ((bVar2 != 0 && (bVar2 < 0x80))) {
      pbVar1 = (byte *)((int)puVar13 + 1);
      puVar13 = (uint *)((int)puVar13 + 1);
      bVar2 = *pbVar1;
    }
    if ((byte)*puVar13 != 0) goto LAB_0045f2aa;
    if ((undefined1 (*) [16])0x64 < local_794) {
      puVar13 = FUN_004810c0((uint *)((int)puStack_78c + (int)(local_794[-7] + 0xb)),'/');
      if (puVar13 == puStack_78c) {
        puVar13 = FUN_004810c0((uint *)((int)puVar13 + 1),'/');
      }
      if (((puVar13 == (uint *)0x0) || (*(char *)((int)puVar13 + 1) == '\0')) ||
         (0x9b < (int)puVar13 - (int)puStack_78c)) goto LAB_0045f2aa;
    }
  }
  if (local_764 != (uint *)0x0) {
    if (local_760 < 0x65) {
      bVar2 = (byte)*local_764;
      puVar13 = local_764;
      while ((bVar2 != 0 && (bVar2 < 0x80))) {
        pbVar1 = (byte *)((int)puVar13 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
        bVar2 = *pbVar1;
      }
      if ((char)*puVar13 == '\0') goto LAB_0045f34e;
    }
    FUN_0045e3c0((int *)(pauVar4[1] + 0xc),(uint *)"linkpath",local_764);
    if (100 < local_760) {
      if (puStack_790 == (uint *)0x0) {
        FUN_0048c820((int)piVar9,(uint *)"././@LongSymLink");
      }
      else {
        FUN_0048c550((int)piVar9,(uint *)"././@LongHardLink");
      }
    }
    local_7a0 = 1;
  }
LAB_0045f34e:
  pcStack_748 = (char *)0x0;
  uStack_740 = 0;
  local_744 = 0;
  piVar33 = FUN_0048c000(piVar9);
  if (piVar33 == (int *)0x0) {
    uVar12 = 0;
  }
  else {
    piVar33 = FUN_0048c000(piVar9);
    iVar10 = (int)piVar33 + 1;
    do {
      iVar17 = *piVar33;
      piVar33 = (int *)((int)piVar33 + 1);
    } while ((char)iVar17 != '\0');
    uVar12 = (int)piVar33 - iVar10;
  }
  puVar13 = (uint *)FUN_0048c000(piVar9);
  FUN_0048d570((int *)&pcStack_748,puVar13,uVar12);
  uVar26 = FUN_0048c180((int)piVar9);
  if (1 < (int)((ulonglong)uVar26 >> 0x20)) {
    local_7a0 = 1;
  }
  uVar26 = FUN_0048bea0((int)piVar9);
  if (0x3ffff < (uint)uVar26) {
    uVar26 = FUN_0048bea0((int)piVar9);
    FUN_0045e4b0((int *)(pauVar4[1] + 0xc),(uint *)&DAT_00527b6c,(uint)uVar26,
                 (uint)((ulonglong)uVar26 >> 0x20));
    local_7a0 = 1;
  }
  if (local_75c != (uint *)0x0) {
    if (uStack_750 < 0x20) {
      bVar2 = (byte)*local_75c;
      puVar13 = local_75c;
      while ((bVar2 != 0 && (bVar2 < 0x80))) {
        pbVar1 = (byte *)((int)puVar13 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
        bVar2 = *pbVar1;
      }
      if ((char)*puVar13 == '\0') goto LAB_0045f432;
    }
    FUN_0045e3c0((int *)(pauVar4[1] + 0xc),(uint *)"gname",local_75c);
    local_7a0 = 1;
  }
LAB_0045f432:
  uVar26 = FUN_0048c250((int)piVar9);
  if (0x3ffff < (uint)uVar26) {
    uVar26 = FUN_0048c250((int)piVar9);
    FUN_0045e4b0((int *)(pauVar4[1] + 0xc),(uint *)&DAT_00527b58,(uint)uVar26,
                 (uint)((ulonglong)uVar26 >> 0x20));
    local_7a0 = 1;
  }
  if (puStack_758 != (uint *)0x0) {
    if (uStack_74c < 0x20) {
      bVar2 = (byte)*puStack_758;
      puVar13 = puStack_758;
      while ((bVar2 != 0 && (bVar2 < 0x80))) {
        pbVar1 = (byte *)((int)puVar13 + 1);
        puVar13 = (uint *)((int)puVar13 + 1);
        bVar2 = *pbVar1;
      }
      if ((char)*puVar13 == '\0') goto LAB_0045f4ab;
    }
    FUN_0045e3c0((int *)(pauVar4[1] + 0xc),(uint *)"uname",puStack_758);
    local_7a0 = 1;
  }
LAB_0045f4ab:
  uVar12 = FUN_0048bcc0((int)piVar9);
  if (((short)uVar12 == 0x6000) || (uVar12 = FUN_0048bcc0((int)piVar9), (short)uVar12 == 0x2000)) {
    uVar12 = FUN_0048c140((int)piVar9);
    pcStack_788 = (char *)FUN_0048c160((int)piVar9);
    if (0x3ffff < (int)uVar12) {
      FUN_0045e4b0((int *)(pauVar4[1] + 0xc),(uint *)"SCHILY.devmajor",uVar12,(int)uVar12 >> 0x1f);
      local_7a0 = 1;
    }
    if ((int)pcStack_788 < 0x40000) goto LAB_0045f553;
    piVar33 = (int *)(pauVar4[1] + 0xc);
    uVar28 = 0x54;
    uVar29 = 0x52;
    uVar30 = 0x52;
    FUN_0045e4b0(piVar33,(uint *)"SCHILY.devminor",(uint)pcStack_788,(int)pcStack_788 >> 0x1f);
    local_7a0 = 1;
    FUN_0048bd00(piVar9,piVar33,(int *)CONCAT22(uVar30,CONCAT11(uVar29,uVar28)));
    local_798 = (undefined1 (**) [16])FUN_0048c9d0((int)param_4);
  }
  else {
LAB_0045f553:
    if ((local_7a0 == 0) &&
       ((lVar27 = FUN_0048bfc0((int)piVar9), lVar27 < 0 ||
        (lVar27 = FUN_0048bfc0((int)piVar9), 0x7ffffffe < lVar27)))) {
      local_7a0 = 1;
      FUN_0048bd00(piVar9,unaff_EBP,(int *)unaff_EBX);
      local_798 = (undefined1 (**) [16])FUN_0048c9d0((int)param_4);
    }
    else {
      pcVar21 = (char *)FUN_0048bd00(piVar9,unaff_EBP,(int *)unaff_EBX);
      if (local_7a0 == 0) {
        if ((pcVar21 == (char *)0x0) || (*pcVar21 == '\0')) {
          iVar10 = FUN_00493a00((int)param_4);
          if ((iVar10 < 1) && ((int)local_780 < 1)) goto LAB_0045f617;
          local_7a0 = 1;
          local_798 = (undefined1 (**) [16])FUN_0048c9d0((int)param_4);
        }
        else {
          local_7a0 = 1;
          local_798 = (undefined1 (**) [16])FUN_0048c9d0((int)param_4);
        }
      }
      else {
LAB_0045f617:
        local_798 = (undefined1 (**) [16])FUN_0048c9d0((int)param_4);
        if (local_7a0 == 0) {
          if (local_798 == (undefined1 (**) [16])0x0) {
            iVar10 = FUN_0048c1f0((int)piVar9);
            if (0 < iVar10) {
              local_7a0 = 1;
            }
          }
          else {
            local_7a0 = 1;
          }
        }
      }
    }
  }
  if (param_1[3] == (undefined1 (*) [16])0x30003) {
LAB_0045f73d:
    if (local_7a0 != 0) goto LAB_0045f755;
    local_780 = local_778._4_4_;
    ppauVar24 = (undefined1 (**) [16])local_778;
  }
  else {
    lVar27 = FUN_0048bc10((int)piVar9);
    if ((lVar27 != 0) || (iVar10 = FUN_0048bc20((int)piVar9), iVar10 != 0)) {
      uVar12 = FUN_0048bc20((int)piVar9);
      uVar26 = FUN_0048bc10((int)piVar9);
      FUN_0045e500((int *)(pauVar4[1] + 0xc),(uint *)"ctime",(uint)uVar26,
                   (uint)((ulonglong)uVar26 >> 0x20),uVar12);
    }
    lVar27 = FUN_0048bbb0((int)piVar9);
    if ((lVar27 != 0) || (iVar10 = FUN_0048bbc0((int)piVar9), iVar10 != 0)) {
      uVar12 = FUN_0048bbc0((int)piVar9);
      uVar26 = FUN_0048bbb0((int)piVar9);
      FUN_0045e500((int *)(pauVar4[1] + 0xc),(uint *)"atime",(uint)uVar26,
                   (uint)((ulonglong)uVar26 >> 0x20),uVar12);
    }
    uVar12 = FUN_0048bc00((int)piVar9);
    if (uVar12 != 0) {
      uVar26 = FUN_0048bbe0((int)piVar9);
      pcStack_788 = (char *)uVar26;
      lVar27 = FUN_0048bfc0((int)piVar9);
      if (CONCAT44((int)((ulonglong)uVar26 >> 0x20),pcStack_788) < lVar27) {
        uVar12 = FUN_0048bbf0((int)piVar9);
        uVar26 = FUN_0048bbe0((int)piVar9);
        FUN_0045e500((int *)(pauVar4[1] + 0xc),(uint *)"LIBARCHIVE.creationtime",(uint)uVar26,
                     (uint)((ulonglong)uVar26 >> 0x20),uVar12);
      }
    }
    if (param_1[3] == (undefined1 (*) [16])0x30003) goto LAB_0045f73d;
LAB_0045f755:
    lVar27 = FUN_0048bfc0((int)piVar9);
    if (lVar27 < 0) {
LAB_0045f78b:
      uVar12 = FUN_0048bfd0((int)piVar9);
      uVar26 = FUN_0048bfc0((int)piVar9);
      FUN_0045e500((int *)(pauVar4[1] + 0xc),(uint *)"mtime",(uint)uVar26,
                   (uint)((ulonglong)uVar26 >> 0x20),uVar12);
    }
    else {
      lVar27 = FUN_0048bfc0((int)piVar9);
      if (((int)((ulonglong)lVar27 >> 0x20) != 0 && -1 < lVar27) ||
         (((-1 < lVar27 && (0x7ffffffe < (uint)lVar27)) ||
          (iVar10 = FUN_0048bfd0((int)piVar9), iVar10 != 0)))) goto LAB_0045f78b;
    }
    puVar13 = (uint *)FUN_0048bd00(piVar9,unaff_EBP,(int *)unaff_EBX);
    if ((puVar13 != (uint *)0x0) && ((char)*puVar13 != '\0')) {
      FUN_0045e3c0((int *)(pauVar4[1] + 0xc),(uint *)"SCHILY.fflags",puVar13);
    }
    ppauVar24 = local_798;
    if ((((((uint)local_798 & 0x3c00) != 0) &&
         (local_79c = (char *)FUN_0045e5b0(param_1,(int)param_4,(int)pauVar4,0x19,(int)unaff_EBP),
         local_79c == (char *)0xffffffe2)) ||
        ((((uint)ppauVar24 & 0x100) != 0 &&
         (local_79c = (char *)FUN_0045e5b0(param_1,(int)param_4,(int)pauVar4,0x109,(int)unaff_EBP),
         local_79c == (char *)0xffffffe2)))) ||
       ((((uint)ppauVar24 & 0x200) != 0 &&
        (local_79c = (char *)FUN_0045e5b0(param_1,(int)param_4,(int)pauVar4,0x209,(int)unaff_EBP),
        local_79c == (char *)0xffffffe2)))) goto LAB_0045fefa;
    if ((int)local_780 < 1) {
LAB_0045f9fc:
      local_780 = local_778._4_4_;
      ppauVar24 = (undefined1 (**) [16])local_778;
    }
    else {
      piVar33 = (int *)(pauVar4[1] + 0xc);
      FUN_0045e4b0(piVar33,(uint *)"GNU.sparse.major",1,0);
      FUN_0045e4b0(piVar33,(uint *)"GNU.sparse.minor",0,0);
      FUN_0045e3c0(piVar33,(uint *)"GNU.sparse.name",puStack_78c);
      uVar26 = FUN_0048c180((int)piVar9);
      FUN_0045e4b0(piVar33,(uint *)"GNU.sparse.realsize",(uint)uVar26,
                   (uint)((ulonglong)uVar26 >> 0x20));
      if ((pcStack_748 == (char *)0x0) || (pcVar21 = pcStack_748, *pcStack_748 == '\0')) {
        acStack_5e8[0] = s_GNUSparseFile_blank_005263b8[0x10];
        acStack_5e8[1] = s_GNUSparseFile_blank_005263b8[0x11];
        acStack_5e8[2] = s_GNUSparseFile_blank_005263b8[0x12];
        acStack_5e8[3] = s_GNUSparseFile_blank_005263b8[0x13];
        uStack_5f8._0_1_ = s_GNUSparseFile_blank_005263b8[0];
        uStack_5f8._1_1_ = s_GNUSparseFile_blank_005263b8[1];
        uStack_5f8._2_1_ = s_GNUSparseFile_blank_005263b8[2];
        uStack_5f8._3_1_ = s_GNUSparseFile_blank_005263b8[3];
        acStack_5f4[0] = s_GNUSparseFile_blank_005263b8[4];
        acStack_5f4[1] = s_GNUSparseFile_blank_005263b8[5];
        acStack_5f4[2] = s_GNUSparseFile_blank_005263b8[6];
        acStack_5f4[3] = s_GNUSparseFile_blank_005263b8[7];
        acStack_5f0[0] = s_GNUSparseFile_blank_005263b8[8];
        acStack_5f0[1] = s_GNUSparseFile_blank_005263b8[9];
        acStack_5f0[2] = s_GNUSparseFile_blank_005263b8[10];
        acStack_5f0[3] = s_GNUSparseFile_blank_005263b8[0xb];
        acStack_5ec[0] = s_GNUSparseFile_blank_005263b8[0xc];
        acStack_5ec[1] = s_GNUSparseFile_blank_005263b8[0xd];
        acStack_5ec[2] = s_GNUSparseFile_blank_005263b8[0xe];
        acStack_5ec[3] = s_GNUSparseFile_blank_005263b8[0xf];
      }
      else {
        do {
          pcVar22 = pcVar21;
          pcVar21 = pcVar22 + 1;
        } while (*pcVar22 != '\0');
        while( true ) {
          for (; (pcStack_748 < pcVar22 && (pcVar22[-1] == '/')); pcVar22 = pcVar22 + -1) {
          }
          if (((pcVar22 <= pcStack_748 + 1) || (pcVar22[-1] != '.')) || (pcVar22[-2] != '/')) break;
          pcVar22 = pcVar22 + -1;
        }
        FUN_00460290((char *)&uStack_5f8,pcStack_748,pcVar22 + -(int)pcStack_748,"GNUSparseFile.0");
      }
      FUN_0048c710((int)piVar9,&uStack_5f8);
      FUN_004987f0((int *)(pauVar4[2] + 8),&DAT_0052b62c);
      iVar10 = FUN_00493cc0((int)piVar9,&local_764,&local_780);
      if (iVar10 != 0) goto LAB_0045f9fc;
      local_778._0_4_ = ppauStack_76c;
      ppauVar24 = ppauStack_770;
      do {
        FUN_004987f0((int *)(pauVar4[2] + 8),"%jd\n%jd\n");
        bVar25 = CARRY4((uint)ppauVar24,(uint)local_780);
        ppauVar24 = (undefined1 (**) [16])((int)ppauVar24 + (int)local_780);
        local_778._0_4_ =
             (undefined1 (**) [16])((int)(undefined1 (**) [16])local_778 + (uint)bVar25 + local_77c)
        ;
        iVar10 = FUN_00460580((int)pauVar4,(uint)local_764,local_760,local_780,local_77c);
        if (iVar10 != 0) {
          pcVar21 = "Can\'t allocate memory";
          uVar32 = 0xc;
          goto LAB_0045f9d3;
        }
        unaff_EBX = &local_780;
        unaff_EBP = &local_764;
        iVar10 = FUN_00493cc0((int)piVar9,unaff_EBP,unaff_EBX);
      } while (iVar10 == 0);
    }
    iVar10 = FUN_00460820((int)param_1,(int)pauVar4,(int)param_4);
    if (iVar10 == -0x1e) goto LAB_0045fefa;
    iVar10 = FUN_0048c1f0((int)piVar9);
    if (iVar10 == 1) {
      uVar12 = 4;
      puVar13 = (uint *)&DAT_00527374;
    }
    else {
      iVar10 = FUN_0048c1f0((int)piVar9);
      if (iVar10 != 2) goto LAB_0045fa5f;
      uVar12 = 3;
      puVar13 = (uint *)&DAT_005252e4;
    }
    FUN_0045e3f0((int *)(pauVar4[1] + 0xc),(uint *)"LIBARCHIVE.symlinktype",puVar13,uVar12);
  }
LAB_0045fa5f:
  uVar12 = FUN_0048bcc0((int)piVar9);
  if ((short)uVar12 != -0x8000) {
    FUN_0048c7c0((int)piVar9,0,0);
  }
  if (param_1[3] == (undefined1 (*) [16])0x30002) {
LAB_0045fa9c:
    if (puStack_790 != (uint *)0x0) {
      FUN_0048c7c0((int)piVar9,0,0);
    }
  }
  else if (puStack_790 != (uint *)0x0) {
    FUN_0048c7c0((int)piVar9,0,0);
    goto LAB_0045fa9c;
  }
  uVar26 = FUN_0048c180((int)piVar9);
  ppauStack_76c = (undefined1 (**) [16])((ulonglong)uVar26 >> 0x20);
  local_798 = (undefined1 (**) [16])uVar26;
  iVar10 = *(int *)(pauVar4[2] + 0xc);
  if (iVar10 != 0) {
    *(uint *)(pauVar4[3] + 4) = -iVar10 & 0x1ffU;
    uVar12 = (-iVar10 & 0x1ffU) + iVar10;
    FUN_0048c7c0((int)piVar9,(char *)(uVar12 + (int)ppauVar24),
                 *local_780 + CARRY4(uVar12,(uint)ppauVar24));
    uVar26 = CONCAT44(ppauStack_76c,local_798);
  }
  ppauStack_76c = (undefined1 (**) [16])((ulonglong)uVar26 >> 0x20);
  local_798 = (undefined1 (**) [16])uVar26;
  uVar26 = FUN_0048c180((int)piVar9);
  if (1 < (int)((ulonglong)uVar26 >> 0x20)) {
    uVar26 = FUN_0048c180((int)piVar9);
    FUN_0045e4b0((int *)(pauVar4[1] + 0xc),(uint *)&DAT_00526960,(uint)uVar26,
                 (uint)((ulonglong)uVar26 >> 0x20));
  }
  iVar10 = FUN_00498930((int)param_1,auStack_1f8,piVar9,-1,0,0);
  if (iVar10 == -0x1e) goto LAB_0045fefa;
  if (*(int *)pauVar4[2] == 0) goto LAB_0045fe4e;
  puVar18 = FUN_0048bb80(param_1,unaff_EBP,unaff_EBX);
  uVar12 = s_PaxHeader_blank_005263a8._0_4_;
  acVar5 = (char  [4])s_PaxHeader_blank_005263a8._4_4_;
  acVar6 = (char  [4])s_PaxHeader_blank_005263a8._8_4_;
  acVar7 = (char  [4])s_PaxHeader_blank_005263a8._12_4_;
  if ((pcStack_748 != (char *)0x0) &&
     (uVar12 = s_PaxHeader_blank_005263a8._0_4_,
     acVar5 = (char  [4])s_PaxHeader_blank_005263a8._4_4_,
     acVar6 = (char  [4])s_PaxHeader_blank_005263a8._8_4_,
     acVar7 = (char  [4])s_PaxHeader_blank_005263a8._12_4_, *pcStack_748 != '\0')) {
    pcStack_788 = pcStack_748 + 1;
    pcVar21 = pcStack_748;
    do {
      cVar3 = *pcVar21;
      pcVar21 = pcVar21 + 1;
    } while (cVar3 != '\0');
    pcVar21 = pcStack_748 + ((int)pcVar21 - (int)pcStack_788);
    while( true ) {
      for (; (pcStack_748 < pcVar21 && (pcVar21[-1] == '/')); pcVar21 = pcVar21 + -1) {
      }
      if (((pcVar21 <= pcStack_748 + 1) || (pcVar21[-1] != '.')) || (pcVar21[-2] != '/')) break;
      pcVar21 = pcVar21 + -1;
    }
    param_1 = param_3;
    if (pcVar21 == pcStack_748) {
      cStack_6e6 = s__PaxHeader_rootdir_005252ac[0x12];
      acStack_6e8[0] = s__PaxHeader_rootdir_005252ac[0x10];
      acStack_6e8[1] = s__PaxHeader_rootdir_005252ac[0x11];
      uVar12 = s__PaxHeader_rootdir_005252ac._0_4_;
      acVar5 = (char  [4])s__PaxHeader_rootdir_005252ac._4_4_;
      acVar6 = (char  [4])s__PaxHeader_rootdir_005252ac._8_4_;
      acVar7 = (char  [4])s__PaxHeader_rootdir_005252ac._12_4_;
    }
    else if ((*pcStack_748 == '.') && (pcVar21 == pcStack_748 + 1)) {
      acStack_6e8[0] = s_PaxHeader_currentdir_005252c0[0x10];
      acStack_6e8[1] = s_PaxHeader_currentdir_005252c0[0x11];
      cStack_6e6 = s_PaxHeader_currentdir_005252c0[0x12];
      cStack_6e5 = s_PaxHeader_currentdir_005252c0[0x13];
      cStack_6e4 = s_PaxHeader_currentdir_005252c0[0x14];
      uVar12 = s_PaxHeader_currentdir_005252c0._0_4_;
      acVar5 = (char  [4])s_PaxHeader_currentdir_005252c0._4_4_;
      acVar6 = (char  [4])s_PaxHeader_currentdir_005252c0._8_4_;
      acVar7 = (char  [4])s_PaxHeader_currentdir_005252c0._12_4_;
    }
    else {
      acStack_730[0] = s_PaxHeader_00525600[8];
      acStack_730[1] = s_PaxHeader_00525600[9];
      acStack_738[0] = s_PaxHeader_00525600[0];
      acStack_738[1] = s_PaxHeader_00525600[1];
      acStack_738[2] = s_PaxHeader_00525600[2];
      acStack_738[3] = s_PaxHeader_00525600[3];
      uStack_734._0_1_ = s_PaxHeader_00525600[4];
      uStack_734._1_1_ = s_PaxHeader_00525600[5];
      uStack_734._2_1_ = s_PaxHeader_00525600[6];
      uStack_734._3_1_ = s_PaxHeader_00525600[7];
      FUN_00460290((char *)&uStack_6f8,pcStack_748,pcVar21 + -(int)pcStack_748,acStack_738);
      uVar12 = uStack_6f8;
      acVar5 = acStack_6f4;
      acVar6 = acStack_6f0;
      acVar7 = acStack_6ec;
    }
  }
  acStack_6ec = acVar7;
  acStack_6f0 = acVar6;
  acStack_6f4 = acVar5;
  uStack_6f8 = uVar12;
  FUN_0048c710((int)puVar18,&uStack_6f8);
  FUN_0048c7c0((int)local_798,*(undefined4 *)pauVar4[2],0);
  lVar27 = FUN_0048c250((int)piVar9);
  if (0x3ffff < lVar27) {
    lVar27 = 0x3ffff;
  }
  FUN_0048c8b0((int)local_798,(int)lVar27,(int)((ulonglong)lVar27 >> 0x20));
  lVar27 = FUN_0048bea0((int)piVar9);
  if (0x3ffff < lVar27) {
    lVar27 = 0x3ffff;
  }
  FUN_0048c520((int)local_798,(int)lVar27,(int)((ulonglong)lVar27 >> 0x20));
  uVar8 = FUN_0048bfb0((int)piVar9);
  FUN_0048c630((int)local_798,uVar8 & 0xf1ff);
  puVar13 = (uint *)FUN_0048c260(piVar9);
  FUN_0048c8d0((int)local_798,puVar13);
  puVar13 = (uint *)FUN_0048beb0(piVar9);
  FUN_0048c540((int)local_798,puVar13);
  lVar27 = FUN_0048bfc0((int)piVar9);
  if ((int)((ulonglong)lVar27 >> 0x20) == 0 || lVar27 < 0) {
    if (lVar27 < 0) {
      ppauStack_770 = (undefined1 (**) [16])0x0;
      ppauStack_76c = (undefined1 (**) [16])0x0;
      lVar27 = 0;
    }
    else if (0x7ffffffe < lVar27) goto LAB_0045fd1e;
  }
  else {
LAB_0045fd1e:
    lVar27 = 0x7fffffff;
  }
  FUN_0048c650((int)local_798,(uint)lVar27,(int)((ulonglong)lVar27 >> 0x20),0);
  FUN_0048c2a0((int)local_798,0,0,0);
  FUN_0048c3e0((int)local_798,0,0,0);
  local_780 = (undefined1 (*) [16])FUN_00498930((int)param_1,auStack_3f0,(int *)local_798,0x78,1,0);
  FUN_0048ba90(local_798);
  if ((int)local_780 < -0x14) {
    pcVar21 = "archive_write_pax_header: \'x\' header failed?!  This can\'t happen.\n";
    uVar32 = 0xffffffff;
LAB_0045f9d3:
    FUN_00487380((int)param_1,uVar32,(int)pcVar21);
    FUN_0048ba90(piVar9);
    FUN_0048d710(&uStack_740);
    return (char *)0xffffffe2;
  }
  if ((int)local_780 < (int)local_794) {
    local_794 = local_780;
  }
  iVar10 = FUN_00494870((int)param_1,auStack_3f0,0x200);
  if (iVar10 != 0) {
    FUN_00460550((int)pauVar4);
    *(undefined4 *)*pauVar4 = 0;
    *(undefined4 *)(*pauVar4 + 4) = 0;
    *(undefined4 *)(*pauVar4 + 8) = 0;
    *(undefined4 *)(*pauVar4 + 0xc) = 0;
    FUN_0048ba90(piVar9);
    FUN_0048d710(&uStack_740);
    return (char *)0xffffffe2;
  }
  uVar12 = *(uint *)pauVar4[2];
  uVar32 = *(undefined4 *)(pauVar4[1] + 0xc);
  *(uint *)*pauVar4 = uVar12;
  *(undefined4 *)(*pauVar4 + 4) = 0;
  *(uint *)(*pauVar4 + 8) = -uVar12 & 0x1ff;
  *(undefined4 *)(*pauVar4 + 0xc) = 0;
  iVar10 = FUN_00494870((int)param_1,uVar32,uVar12);
  if ((iVar10 == 0) && (iVar10 = FUN_004948c0((int)param_1,*(uint *)(*pauVar4 + 8)), iVar10 == 0)) {
    *(undefined4 *)(*pauVar4 + 8) = 0;
    *(undefined4 *)(*pauVar4 + 0xc) = 0;
    *(undefined4 *)*pauVar4 = 0;
    *(undefined4 *)(*pauVar4 + 4) = 0;
LAB_0045fe4e:
    pcVar21 = (char *)FUN_00494870((int)param_1,auStack_1f8,0x200);
    ppauVar31 = local_798;
    if (pcVar21 == (char *)0x0) {
      FUN_0048c7c0((int)param_4,local_798,ppauStack_76c);
      if ((*(int *)(pauVar4[3] + 8) == 0) &&
         ((ppauStack_76c != (undefined1 (**) [16])0x0 || (ppauVar31 != (undefined1 (**) [16])0x0))))
      {
        FUN_00460580((int)pauVar4,0,0,ppauVar31,ppauStack_76c);
        ppauVar24 = ppauVar31;
      }
      *(undefined4 *)(*pauVar4 + 0xc) = 0;
      *(uint *)(*pauVar4 + 8) = -(int)ppauVar24 & 0x1ff;
      FUN_0048ba90(piVar9);
      FUN_0048d710(&pcStack_748);
      return local_79c;
    }
    FUN_0048ba90(piVar9);
    FUN_0048d710(&pcStack_748);
    return pcVar21;
  }
LAB_0045fefa:
  FUN_0048ba90(piVar9);
  FUN_0048d710(&pcStack_748);
  return (char *)0xffffffe2;
code_r0x0045ebc0:
  (*pauVar15)[0] = 0;
  pauVar15 = FUN_00480570(local_780,0x2f);
  if (pauVar15 == (undefined1 (*) [16])0x0) goto LAB_0045ed49;
  goto LAB_0045ebb3;
}


