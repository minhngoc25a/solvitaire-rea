// Function: FUN_0045cd30
// Entry: 0045cd30
// Size: 1791 bytes
// Thunk: false
// External: false


uint __cdecl
FUN_0045cd30(int param_1,uint param_2,uint param_3,uint *param_4,undefined4 param_5,
            undefined4 param_6,int *param_7,int param_8)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  undefined3 extraout_var;
  __acrt_ptd *p_Var8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  int unaff_retaddr;
  uint uVar17;
  uint local_c [2];
  int local_4;
  
  puVar1 = param_4;
  uVar3 = param_2;
  uVar14 = CONCAT44(unaff_EBX,unaff_EBP);
  uVar17 = 0;
  while( true ) {
    if (*puVar1 != 0) {
      FUN_00488f20(param_1,(ulonglong)*puVar1);
      *puVar1 = 0;
    }
    puVar5 = (uint *)FUN_00488710(param_1,0x200,local_c);
    if ((int)local_c[0] < 0) {
      return local_c[0];
    }
    if (local_c[0] == 0) {
      return 1;
    }
    if ((int)local_c[0] < 0x200) {
      FUN_00487380(param_1,0x2a,0x5269e4);
      return 0xffffffe2;
    }
    *puVar1 = 0x200;
    if ((char)*puVar5 != '\0') break;
    uVar11 = 0;
    puVar13 = puVar5;
    do {
      uVar9 = *puVar13;
      puVar13 = (uint *)((int)puVar13 + 1);
      if ((char)uVar9 != '\0') goto LAB_0045ce51;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x200);
    if (*(int *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x30000;
      *(char **)(param_1 + 0x10) = "tar";
    }
    if (*(int *)(uVar3 + 0x10c) == 0) {
      if (*puVar1 != 0) {
        FUN_00488f20(param_1,(ulonglong)*puVar1);
        *puVar1 = 0;
      }
      pcVar6 = (char *)FUN_00488710(param_1,0x200,(uint *)0x0);
      if (((pcVar6 != (char *)0x0) && (*pcVar6 == '\0')) &&
         (iVar7 = FUN_00459870(pcVar6), iVar7 != 0)) {
        FUN_00488f20(param_1,0x200);
      }
      FUN_00487360(param_1);
      return 1;
    }
  }
LAB_0045ce51:
  puVar13 = puVar5;
  bVar4 = FUN_0045aea0(param_1,(int)puVar5);
  if (CONCAT31(extraout_var,bVar4) == 0) {
    FUN_00488f20(param_1,0x200);
    *puVar1 = 0;
    FUN_00487380(param_1,0x16,0x5269fc);
    return 0xfffffff6;
  }
  *(int *)(uVar3 + 0x88) = *(int *)(uVar3 + 0x88) + 1;
  if (0x20 < *(int *)(uVar3 + 0x88)) {
    if (*puVar1 != 0) {
      FUN_00488f20(param_1,(ulonglong)*puVar1);
      *puVar1 = 0;
    }
    FUN_00487380(param_1,0x16,0x5249e0);
    return 0xffffffec;
  }
  switch((char)puVar5[0x27]) {
  case 'A':
    *(undefined4 *)(param_1 + 0xc) = 0x30002;
    *(char **)(param_1 + 0x10) = "Solaris tar";
    uVar11 = FUN_004599c0(param_1,(undefined4 *)uVar3,param_3,(uint)puVar5,puVar1);
    break;
  default:
    pbVar12 = (byte *)((int)puVar5 + 0x101);
    param_4 = (uint *)0x4;
    pcVar6 = "ustar  ";
    do {
      if (*(int *)pbVar12 != *(int *)pcVar6) {
        bVar4 = *pbVar12 < (byte)*pcVar6;
        if (((*pbVar12 == *pcVar6) &&
            (bVar4 = pbVar12[1] < (byte)pcVar6[1], pbVar12[1] == pcVar6[1])) &&
           ((bVar4 = pbVar12[2] < (byte)pcVar6[2], pbVar12[2] == pcVar6[2] &&
            (bVar4 = pbVar12[3] < (byte)pcVar6[3], pbVar12[3] == pcVar6[3])))) {
          uVar11 = 0;
        }
        else {
          uVar11 = -(uint)bVar4 | 1;
        }
        goto LAB_0045d0c0;
      }
      pbVar12 = pbVar12 + 4;
      pcVar6 = pcVar6 + 4;
      bVar4 = (uint *)0x3 < param_4;
      param_4 = param_4 + -1;
    } while (bVar4);
    uVar11 = 0;
LAB_0045d0c0:
    if (uVar11 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x30004;
      *(char **)(param_1 + 0x10) = "GNU tar format";
      uVar11 = FUN_0045a290(param_1,uVar3,param_3,puVar5);
    }
    else if ((*(int *)((int)puVar5 + 0x101) == 0x61747375) &&
            (*(char *)((int)puVar5 + 0x105) == 'r')) {
      if (*(int *)(param_1 + 0xc) != 0x30002) {
        *(undefined4 *)(param_1 + 0xc) = 0x30001;
        *(char **)(param_1 + 0x10) = "POSIX ustar format";
      }
      uVar11 = FUN_0045a0d0(param_1,uVar3,param_3,puVar5,unaff_EDI);
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0x30000;
      uVar11 = 0;
      *(char **)(param_1 + 0x10) = "tar (non-POSIX)";
      iVar7 = FUN_0048cbc0(param_3,puVar13,100,*(DWORD *)(uVar3 + 0xf4));
      if (iVar7 != 0) {
        iVar7 = *(int *)(uVar3 + 0xf4);
        p_Var8 = FUN_0042470e();
        if (*(int *)p_Var8 == 0xc) {
          FUN_00487380(param_1,0xc,0x524ebc);
          uVar11 = 0xffffffe2;
          break;
        }
        FUN_0048d2b0(iVar7);
        FUN_00487380(param_1,0x2a,0x52a264);
        uVar11 = 0xffffffec;
      }
      uVar9 = FUN_00459bd0(param_1,uVar3,(int)param_7,local_4);
      *(undefined4 *)(uVar3 + 0xa4) = 0;
      if ((int)uVar9 < (int)uVar11) {
        uVar11 = uVar9;
      }
      *(uint *)(uVar3 + 0xa0) = -*(int *)(uVar3 + 0x90) & 0x1ff;
    }
    break;
  case 'K':
    uVar11 = FUN_0045cb40(param_1,uVar3,(int *)(uVar3 + 0x48),(int)puVar5,puVar1);
    if ((uVar11 == 0) &&
       ((uVar11 = FUN_0045cd30(param_1,uVar3,param_3,puVar1,unaff_EDI,unaff_ESI,(int *)uVar14,
                               (int)((ulonglong)uVar14 >> 0x20)), uVar11 == 0 ||
        (uVar11 == 0xffffffec)))) {
      FUN_0048c600(param_3,*(uint **)(uVar3 + 0x48));
      uVar11 = 0;
    }
    break;
  case 'L':
    uVar11 = FUN_0045cb40(param_1,uVar3,(int *)(uVar3 + 0x54),(int)puVar5,puVar1);
    if ((uVar11 == 0) &&
       (((uVar11 = FUN_0045cd30(param_1,uVar3,param_3,puVar1,unaff_EDI,unaff_ESI,(int *)uVar14,
                                (int)((ulonglong)uVar14 >> 0x20)), uVar11 == 0 ||
         (uVar11 == 0xffffffec)) &&
        (iVar7 = FUN_0048cbc0(param_3,*(uint **)(uVar3 + 0x54),*(uint *)(uVar3 + 0x58),
                              *(DWORD *)(uVar3 + 0xf4)), iVar7 != 0)))) {
      uVar11 = FUN_0045d500(param_1,*(int *)(uVar3 + 0xf4));
    }
    break;
  case 'V':
    uVar11 = FUN_0045cd30(param_1,uVar3,param_3,puVar1,unaff_EDI,unaff_ESI,(int *)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    uVar17 = (uint)(uVar11 == 1);
    break;
  case 'X':
    *(char **)(param_1 + 0x10) = "POSIX pax interchange format (Sun variant)";
    goto LAB_0045d048;
  case 'g':
    *(undefined4 *)(param_1 + 0xc) = 0x30002;
    *(char **)(param_1 + 0x10) = "POSIX pax interchange format";
    uVar11 = FUN_0045cb40(param_1,uVar3,(int *)(uVar3 + 0x6c),(int)puVar5,puVar1);
    if (uVar11 == 0) {
      uVar11 = FUN_0045cd30(param_1,uVar3,param_3,puVar1,unaff_EDI,unaff_ESI,(int *)uVar14,
                            (int)((ulonglong)uVar14 >> 0x20));
    }
    if (uVar11 == 1) {
      return 1;
    }
    break;
  case 'x':
    *(char **)(param_1 + 0x10) = "POSIX pax interchange format";
LAB_0045d048:
    *(undefined4 *)(param_1 + 0xc) = 0x30002;
    uVar11 = FUN_00459f00(param_1,uVar3,param_3,(int)puVar5,puVar1);
  }
  if (uVar11 != 0xffffffe2) {
    if (*puVar1 != 0) {
      FUN_00488f20(param_1,(ulonglong)*puVar1);
      *puVar1 = 0;
    }
    iVar7 = *(int *)(uVar3 + 0x88) + -1;
    *(int *)(uVar3 + 0x88) = iVar7;
    if ((uVar11 == 0xffffffec) || (uVar11 == 0)) {
      if ((iVar7 == 0) &&
         ((*(int *)(uVar3 + 0x108) != 0 &&
          (uVar9 = FUN_00459f80(param_1,uVar3,param_7,0,puVar1), (int)uVar9 < (int)uVar11)))) {
        uVar11 = uVar9;
      }
      if ((uVar11 == 0xffffffec) || (uVar11 == 0)) {
        if (*(char *)(uVar3 + 0xe0) == '\0') {
          return uVar11;
        }
        if ((*(int *)(uVar3 + 0xd8) != 1) || (*(int *)(uVar3 + 0xdc) != 0)) {
          FUN_00487380(param_1,0xffffffff,0x52467c);
          return 0xffffffec;
        }
        puVar2 = *(undefined4 **)(uVar3 + 0xbc);
        *(undefined1 *)(uVar3 + 0xe0) = 0;
        while (puVar2 != (undefined4 *)0x0) {
          *(undefined4 *)(uVar3 + 0xbc) = *puVar2;
          FUN_0047d191(puVar2);
          puVar2 = *(undefined4 **)(uVar3 + 0xbc);
        }
        param_2 = *(uint *)(uVar3 + 0x90);
        param_3 = *(uint *)(uVar3 + 0x94);
        *(undefined4 *)(uVar3 + 0xc0) = 0;
        uVar14 = FUN_0045d550(param_1,uVar3,&param_2,puVar1);
        iVar7 = (int)uVar14;
        if ((int)uVar14 < 0) {
          return 0xffffffe2;
        }
        while (0 < iVar7) {
          local_4 = iVar7 + -1;
          lVar15 = FUN_0045d550(param_1,uVar3,&param_2,puVar1);
          param_8 = (int)((ulonglong)lVar15 >> 0x20);
          if (lVar15 < 0) {
            return 0xffffffe2;
          }
          lVar16 = FUN_0045d550(param_1,uVar3,&param_2,puVar1);
          if (lVar16 < 0) {
            return 0xffffffe2;
          }
          iVar10 = FUN_00459890(param_1,uVar3,(int)lVar15,param_8,(uint)lVar16,
                                (int)((ulonglong)lVar16 >> 0x20),(int)puVar13,uVar17);
          iVar7 = local_4;
          if (iVar10 != 0) {
            return 0xffffffe2;
          }
        }
        if (*puVar1 != 0) {
          FUN_00488f20(param_1,(ulonglong)*puVar1);
          *puVar1 = 0;
        }
        param_8 = *(int *)(uVar3 + 0x90) - param_2;
        uVar17 = -param_8 & 0x1ff;
        if ((int)param_3 < 1) {
          if (0x7fffffff < param_3) {
            return 0xffffffe2;
          }
          if (param_2 < uVar17) {
            return 0xffffffe2;
          }
        }
        lVar15 = FUN_00488f20(param_1,(ulonglong)(uint)-param_8 & 0xffffffff000001ff);
        if (uVar17 != (uint)lVar15) {
          return 0xffffffe2;
        }
        if ((int)((ulonglong)lVar15 >> 0x20) == 0) {
          uVar17 = param_8 + uVar17;
          if ((int)uVar17 < 0) {
            return uVar17;
          }
          puVar1 = (uint *)(uVar3 + 0x90);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - uVar17;
          *(undefined1 *)(uVar3 + 0xe0) = 0;
          *(uint *)(uVar3 + 0x94) =
               (*(int *)(uVar3 + 0x94) - ((int)uVar17 >> 0x1f)) - (uint)(uVar9 < uVar17);
          return uVar11;
        }
        return 0xffffffe2;
      }
    }
    if (uVar11 == 1) {
      if (unaff_retaddr != 0) {
        return 1;
      }
      FUN_00487380(param_1,0x16,0x5269fc);
      return 0xffffffe2;
    }
  }
  return 0xffffffe2;
}


