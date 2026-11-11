// Function: FUN_0045b1d0
// Entry: 0045b1d0
// Size: 4531 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x0045bd70) */

undefined4 __cdecl
FUN_0045b1d0(int param_1,int param_2,int param_3,byte *param_4,undefined **param_5,char *param_6)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  undefined **ppuVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  SIZE_T unaff_ESI;
  uint *unaff_EDI;
  bool bVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined8 local_8;
  
  pbVar6 = param_4;
  ppuVar12 = (undefined **)&DAT_005236fc;
  if (param_5 != (undefined **)0x0) {
    ppuVar12 = param_5;
  }
  switch(*param_4) {
  case 0x47:
    iVar5 = _strncmp((char *)param_4,"GNU.sparse",10);
    if ((iVar5 != 0) || (*(int *)(param_2 + 0xb8) != 0)) {
      pcVar8 = "GNU.sparse.numblocks";
      pbVar10 = param_4;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b275:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b27a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b275;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b27a:
      ppuVar11 = (undefined **)(param_2 + 200);
      if (uVar7 == 0) {
        *ppuVar11 = (undefined *)0xffffffff;
        *(undefined4 *)(param_2 + 0xcc) = 0xffffffff;
        *(undefined4 *)(param_2 + 0xd0) = 0xffffffff;
        *(undefined4 *)(param_2 + 0xd4) = 0xffffffff;
        *(undefined4 *)(param_2 + 0xd8) = 0;
        *(undefined4 *)(param_2 + 0xdc) = 0;
      }
      pcVar8 = "GNU.sparse.offset";
      do {
        bVar1 = *param_4;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b2d8:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b2dd;
        }
        if (bVar1 == 0) break;
        bVar1 = param_4[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b2d8;
        param_4 = param_4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b2dd:
      if (uVar7 == 0) {
        ppuVar9 = ppuVar12;
        do {
          cVar2 = *(char *)ppuVar9;
          ppuVar9 = (undefined **)((int)ppuVar9 + 1);
        } while (cVar2 != '\0');
        param_5 = ppuVar11;
        lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar9 - ((int)ppuVar12 + 1),10);
        local_8 = CONCAT44(local_8._4_4_,(int)lVar14);
        *(longlong *)ppuVar11 = lVar14;
        if ((*(uint *)(param_2 + 0xd0) & *(uint *)(param_2 + 0xd4)) != 0xffffffff) {
          param_5 = ppuVar11;
          iVar5 = FUN_00459890(param_1,param_2,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20),
                               *(uint *)(param_2 + 0xd0),*(uint *)(param_2 + 0xd4),(int)unaff_EDI,
                               unaff_ESI);
          if (iVar5 != 0) {
            return 0xffffffe2;
          }
          *ppuVar11 = (undefined *)0xffffffff;
          *(undefined4 *)(param_2 + 0xcc) = 0xffffffff;
          *(undefined4 *)(param_2 + 0xd0) = 0xffffffff;
          *(undefined4 *)(param_2 + 0xd4) = 0xffffffff;
        }
      }
      param_5 = (undefined **)(param_2 + 200);
      param_4 = (byte *)(param_2 + 0xd0);
      pcVar8 = "GNU.sparse.numbytes";
      pbVar10 = pbVar6;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b3b5:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b3ba;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b3b5;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b3ba:
      if (uVar7 == 0) {
        ppuVar9 = ppuVar12;
        do {
          cVar2 = *(char *)ppuVar9;
          ppuVar9 = (undefined **)((int)ppuVar9 + 1);
        } while (cVar2 != '\0');
        lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar9 - ((int)ppuVar12 + 1),10);
        puVar3 = *ppuVar11;
        local_8 = CONCAT44(local_8._4_4_,puVar3);
        *(longlong *)(param_2 + 0xd0) = lVar14;
        if (((uint)puVar3 & *(uint *)(param_2 + 0xcc)) != 0xffffffff) {
          iVar5 = FUN_00459890(param_1,param_2,(int)puVar3,*(uint *)(param_2 + 0xcc),(uint)lVar14,
                               (int)((ulonglong)lVar14 >> 0x20),(int)unaff_EDI,unaff_ESI);
          if (iVar5 != 0) {
            return 0xffffffe2;
          }
          *param_5 = (undefined *)0xffffffff;
          param_5[1] = (undefined *)0xffffffff;
          param_4[0] = 0xff;
          param_4[1] = 0xff;
          param_4[2] = 0xff;
          param_4[3] = 0xff;
          *(undefined4 *)(param_2 + 0xd4) = 0xffffffff;
        }
      }
      pcVar8 = "GNU.sparse.size";
      pbVar10 = pbVar6;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b460:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b465;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b460;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b465:
      if (uVar7 == 0) {
        ppuVar11 = ppuVar12;
        do {
          cVar2 = *(char *)ppuVar11;
          ppuVar11 = (undefined **)((int)ppuVar11 + 1);
        } while (cVar2 != '\0');
        lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
        *(longlong *)(param_2 + 0xb0) = lVar14;
        FUN_0048c7c0(param_3,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
        *(undefined4 *)(param_2 + 0x110) = 1;
      }
      pcVar8 = "GNU.sparse.map";
      pbVar10 = pbVar6;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b4d0:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b4d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b4d0;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b4d5:
      if (uVar7 == 0) {
        *(undefined4 *)(param_2 + 0xd8) = 0;
        *(undefined4 *)(param_2 + 0xdc) = 1;
        lVar14 = -1;
        ppuVar11 = ppuVar12;
        while( true ) {
          param_4 = (byte *)((ulonglong)lVar14 >> 0x20);
          param_5 = (undefined **)lVar14;
          cVar2 = *(char *)ppuVar11;
          ppuVar9 = ppuVar11;
          while ((cVar2 != '\0' && (cVar2 != ','))) {
            if (9 < (byte)(*(char *)ppuVar9 - 0x30U)) {
              return 0xffffffec;
            }
            pcVar8 = (char *)((int)ppuVar9 + 1);
            ppuVar9 = (undefined **)((int)ppuVar9 + 1);
            cVar2 = *pcVar8;
          }
          if ((lVar14 < 0x100000000) && (lVar14 < 0)) {
            lVar14 = FUN_0045d790((char *)ppuVar11,(int)ppuVar9 - (int)ppuVar11,10);
            if (lVar14 < 0) {
              return 0xffffffec;
            }
          }
          else {
            lVar14 = FUN_0045d790((char *)ppuVar11,(int)ppuVar9 - (int)ppuVar11,10);
            if (lVar14 < 0) {
              return 0xffffffec;
            }
            iVar5 = FUN_00459890(param_1,param_2,(int)param_5,(int)param_4,(uint)lVar14,
                                 (int)((ulonglong)lVar14 >> 0x20),(int)unaff_EDI,unaff_ESI);
            if (iVar5 != 0) {
              return 0xffffffec;
            }
            lVar14 = -1;
          }
          param_5 = (undefined **)lVar14;
          if (*(char *)ppuVar9 == '\0') break;
          ppuVar11 = (undefined **)((int)ppuVar9 + 1);
        }
      }
      pcVar8 = "GNU.sparse.major";
      pbVar10 = pbVar6;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b5d8:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b5dd;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b5d8;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b5dd:
      if (uVar7 == 0) {
        ppuVar11 = ppuVar12;
        do {
          cVar2 = *(char *)ppuVar11;
          ppuVar11 = (undefined **)((int)ppuVar11 + 1);
        } while (cVar2 != '\0');
        lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
        *(int *)(param_2 + 0xd8) = (int)lVar14;
        *(undefined1 *)(param_2 + 0xe0) = 1;
      }
      pcVar8 = "GNU.sparse.minor";
      pbVar10 = pbVar6;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b630:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b635;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b630;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b635:
      if (uVar7 == 0) {
        ppuVar11 = ppuVar12;
        do {
          cVar2 = *(char *)ppuVar11;
          ppuVar11 = (undefined **)((int)ppuVar11 + 1);
        } while (cVar2 != '\0');
        lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
        *(int *)(param_2 + 0xdc) = (int)lVar14;
        *(undefined1 *)(param_2 + 0xe0) = 1;
      }
      pcVar8 = "GNU.sparse.name";
      pbVar10 = pbVar6;
      do {
        bVar1 = *pbVar10;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b690:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b695;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b690;
        pbVar10 = pbVar10 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b695:
      if (uVar7 == 0) {
        *(undefined4 *)(param_2 + 0x1c) = 0;
        if (ppuVar12 == (undefined **)0x0) {
          uVar7 = 0;
        }
        else {
          ppuVar11 = ppuVar12;
          do {
            cVar2 = *(char *)ppuVar11;
            ppuVar11 = (undefined **)((int)ppuVar11 + 1);
          } while (cVar2 != '\0');
          uVar7 = (int)ppuVar11 - ((int)ppuVar12 + 1);
        }
        FUN_0048d570((int *)(param_2 + 0x18),(uint *)ppuVar12,uVar7);
      }
      pcVar8 = "GNU.sparse.realsize";
      do {
        bVar1 = *pbVar6;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b6f0:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b6f5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b6f0;
        pbVar6 = pbVar6 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b6f5:
      if (uVar7 != 0) {
        return 0;
      }
      ppuVar11 = ppuVar12;
      do {
        cVar2 = *(char *)ppuVar11;
        ppuVar11 = (undefined **)((int)ppuVar11 + 1);
      } while (cVar2 != '\0');
      lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
      *(longlong *)(param_2 + 0xb0) = lVar14;
      FUN_0048c7c0(param_3,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
      *(undefined4 *)(param_2 + 0x110) = 1;
      return 0;
    }
    pcVar8 = "Non-regular file cannot be sparse";
    goto LAB_0045b233;
  case 0x4c:
    pcVar8 = "LIBARCHIVE.creationtime";
    do {
      bVar1 = *pbVar6;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045b768:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045b76d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045b768;
      pbVar6 = pbVar6 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045b76d:
    if (uVar7 == 0) {
      FUN_0045ca40((char *)ppuVar12,&local_8,(int *)&param_5);
      FUN_0048c340(param_3,(uint)local_8,local_8._4_4_,(int)param_5);
    }
    pcVar8 = "LIBARCHIVE.symlinktype";
    pbVar6 = param_4;
    do {
      bVar1 = *pbVar6;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045b7c1:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045b7c6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045b7c1;
      pbVar6 = pbVar6 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045b7c6:
    if (uVar7 == 0) {
      pbVar6 = &DAT_00527374;
      ppuVar11 = ppuVar12;
      do {
        bVar1 = *(byte *)ppuVar11;
        bVar13 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_0045b7f1:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b7f6;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)ppuVar11 + 1);
        bVar13 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_0045b7f1;
        ppuVar11 = (undefined **)((int)ppuVar11 + 2);
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b7f6:
      if (uVar7 == 0) {
        uVar15 = 1;
      }
      else {
        pbVar6 = &DAT_005252e4;
        ppuVar11 = ppuVar12;
        do {
          bVar1 = *(byte *)ppuVar11;
          bVar13 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0045b825:
            uVar7 = -(uint)bVar13 | 1;
            goto LAB_0045b82a;
          }
          if (bVar1 == 0) break;
          bVar1 = *(byte *)((int)ppuVar11 + 1);
          bVar13 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0045b825;
          ppuVar11 = (undefined **)((int)ppuVar11 + 2);
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_0045b82a:
        if (uVar7 != 0) goto LAB_0045b839;
        uVar15 = 2;
      }
      FUN_0048c860(param_3,uVar15);
    }
LAB_0045b839:
    pcVar8 = "LIBARCHIVE.xattr.";
    uVar7 = 0xd;
    pbVar6 = param_4;
    do {
      if (*(int *)pbVar6 != *(int *)pcVar8) {
        return 0;
      }
      pbVar6 = pbVar6 + 4;
      pcVar8 = pcVar8 + 4;
      bVar13 = 3 < uVar7;
      uVar7 = uVar7 - 4;
    } while (bVar13);
    if (*pbVar6 == *pcVar8) {
      FUN_0045c4d0(param_3,(int *)param_4,(byte *)ppuVar12);
      return 0;
    }
    break;
  case 0x52:
    pcVar8 = "RHT.security.selinux";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045b8a0:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045b8a5;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045b8a0;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045b8a5:
    if (uVar7 == 0) {
      FUN_00493970(param_3,"security.selinux",(int)ppuVar12,param_6,unaff_EDI,unaff_ESI);
      return 0;
    }
    break;
  case 0x53:
    pcVar8 = "SCHILY.acl.access";
    do {
      bVar1 = *pbVar6;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045b8f6:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045b8fb;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045b8f6;
      pbVar6 = pbVar6 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045b8fb:
    if (uVar7 == 0) {
      uVar7 = 0x100;
    }
    else {
      pcVar8 = "SCHILY.acl.default";
      pbVar6 = param_4;
      do {
        bVar1 = *pbVar6;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045b930:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045b935;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045b930;
        pbVar6 = pbVar6 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045b935:
      if (uVar7 == 0) {
        uVar7 = 0x200;
      }
      else {
        pcVar8 = "SCHILY.acl.ace";
        pbVar6 = param_4;
        do {
          bVar1 = *pbVar6;
          bVar13 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_0045b967:
            uVar7 = -(uint)bVar13 | 1;
            goto LAB_0045b96c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar13 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_0045b967;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_0045b96c:
        if (uVar7 != 0) {
          pcVar8 = "SCHILY.devmajor";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045b9c3:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045b9c8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045b9c3;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045b9c8:
          if (uVar7 == 0) {
            ppuVar11 = ppuVar12;
            do {
              cVar2 = *(char *)ppuVar11;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (cVar2 != '\0');
            lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
            FUN_0048c780(param_3,(int)lVar14);
            return 0;
          }
          pcVar8 = "SCHILY.devminor";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045ba23:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045ba28;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045ba23;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045ba28:
          if (uVar7 == 0) {
            ppuVar11 = ppuVar12;
            do {
              cVar2 = *(char *)ppuVar11;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (cVar2 != '\0');
            lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
            FUN_0048c7a0(param_3,(int)lVar14);
            return 0;
          }
          pcVar8 = "SCHILY.fflags";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045ba83:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045ba88;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045ba83;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045ba88:
          if (uVar7 == 0) {
            FUN_0048c4e0(param_3,ppuVar12);
            return 0;
          }
          pcVar8 = "SCHILY.dev";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045bad0:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045bad5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045bad0;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045bad5:
          if (uVar7 == 0) {
            ppuVar11 = ppuVar12;
            do {
              cVar2 = *(char *)ppuVar11;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (cVar2 != '\0');
            lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
            FUN_0048c480(param_3,(int)lVar14);
            return 0;
          }
          pcVar8 = "SCHILY.ino";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045bb32:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045bb37;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045bb32;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045bb37:
          if (uVar7 == 0) {
            ppuVar11 = ppuVar12;
            do {
              cVar2 = *(char *)ppuVar11;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (cVar2 != '\0');
            lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
            FUN_0048c5d0(param_3,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
            return 0;
          }
          pcVar8 = "SCHILY.nlink";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045bb93:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045bb98;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045bb93;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045bb98:
          if (uVar7 == 0) {
            ppuVar11 = ppuVar12;
            do {
              cVar2 = *(char *)ppuVar11;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (cVar2 != '\0');
            lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
            FUN_0048c6f0(param_3,(int)lVar14);
            return 0;
          }
          pcVar8 = "SCHILY.realsize";
          pbVar6 = param_4;
          do {
            bVar1 = *pbVar6;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045bbf3:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045bbf8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045bbf3;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045bbf8:
          if (uVar7 == 0) {
            ppuVar11 = ppuVar12;
            do {
              cVar2 = *(char *)ppuVar11;
              ppuVar11 = (undefined **)((int)ppuVar11 + 1);
            } while (cVar2 != '\0');
            lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
            *(longlong *)(param_2 + 0xb0) = lVar14;
            *(undefined4 *)(param_2 + 0x110) = 1;
            FUN_0048c7c0(param_3,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
            return 0;
          }
          iVar5 = _strncmp((char *)param_4,"SCHILY.xattr.",0xd);
          if (iVar5 == 0) {
            pbVar6 = param_4;
            do {
              bVar1 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar1 != 0);
            if ((uint)((int)pbVar6 - (int)(param_4 + 1)) < 0xe) {
              return 0;
            }
            pcVar8 = "SCHILY.xattr.";
            uVar7 = 9;
            pbVar6 = param_4;
            do {
              if (*(int *)pbVar6 != *(int *)pcVar8) {
                return 0;
              }
              pbVar6 = pbVar6 + 4;
              pcVar8 = pcVar8 + 4;
              bVar13 = 3 < uVar7;
              uVar7 = uVar7 - 4;
            } while (bVar13);
            if (*pbVar6 != *pcVar8) {
              return 0;
            }
            FUN_00493970(param_3,param_4 + 0xd,(int)ppuVar12,param_6,unaff_EDI,unaff_ESI);
            return 0;
          }
          pcVar8 = "SUN.holesdata";
          do {
            bVar1 = *param_4;
            bVar13 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_0045bce5:
              uVar7 = -(uint)bVar13 | 1;
              goto LAB_0045bcea;
            }
            if (bVar1 == 0) break;
            bVar1 = param_4[1];
            bVar13 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_0045bce5;
            param_4 = param_4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_0045bcea:
          if (uVar7 != 0) {
            return 0;
          }
          param_5 = (undefined **)0x1;
          local_8 = 0;
          if (*(char *)ppuVar12 == ' ') {
            lVar14 = 0;
            while( true ) {
              iVar5 = (int)lVar14;
              ppuVar11 = (undefined **)((int)ppuVar12 + 1);
              cVar2 = *(char *)ppuVar11;
              ppuVar12 = ppuVar11;
              while ((cVar2 != '\0' && (cVar2 != ' '))) {
                if (9 < (byte)(*(char *)ppuVar12 - 0x30U)) goto LAB_0045bdc6;
                pcVar8 = (char *)((int)ppuVar12 + 1);
                ppuVar12 = (undefined **)((int)ppuVar12 + 1);
                cVar2 = *pcVar8;
              }
              local_8 = CONCAT44(local_8._4_4_,(int)((ulonglong)lVar14 >> 0x20));
              lVar14 = FUN_0045d790((char *)ppuVar11,(int)ppuVar12 - (int)ppuVar11,10);
              if (lVar14 < 0) break;
              if (CONCAT44((uint)local_8,iVar5) < lVar14) {
                lVar4 = lVar14 - CONCAT44((uint)local_8,iVar5);
                iVar5 = FUN_00459890(param_1,param_2,iVar5,(uint)local_8,(uint)lVar4,
                                     (int)((ulonglong)lVar4 >> 0x20),(int)unaff_EDI,unaff_ESI);
                if (iVar5 != 0) {
                  return 0xffffffe2;
                }
                *(undefined ***)(*(int *)(param_2 + 0xc0) + 0x18) = param_5;
              }
              if (*(char *)ppuVar12 == '\0') {
                return 0;
              }
              param_5 = (undefined **)((uint)param_5 ^ 1);
            }
          }
LAB_0045bdc6:
          FUN_00487380(param_1,0xffffffff,0x528668);
          return 0xffffffec;
        }
        uVar7 = 0x3c00;
      }
    }
    iVar5 = FUN_0045c3f0(param_1,param_2,param_3,(char *)ppuVar12,uVar7);
    if (iVar5 == -0x1e) {
      return 0xffffffe2;
    }
    return 0;
  case 0x61:
    pcVar8 = "atime";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045be12:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045be17;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045be12;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045be17:
    if (uVar7 == 0) {
      FUN_0045ca40((char *)ppuVar12,&local_8,(int *)&param_5);
      FUN_0048c2a0(param_3,(uint)local_8,local_8._4_4_,(int)param_5);
      return 0;
    }
    break;
  case 99:
    pcVar8 = "ctime";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045be78:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045be7d;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045be78;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045be7d:
    if (uVar7 == 0) {
      FUN_0045ca40((char *)ppuVar12,&local_8,(int *)&param_5);
      FUN_0048c3e0(param_3,(uint)local_8,local_8._4_4_,(int)param_5);
      return 0;
    }
    break;
  case 0x67:
    pbVar10 = &DAT_00527b6c;
    do {
      bVar1 = *pbVar6;
      bVar13 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_0045bee0:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045bee5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar13 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_0045bee0;
      pbVar6 = pbVar6 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045bee5:
    if (uVar7 == 0) {
      ppuVar11 = ppuVar12;
      do {
        cVar2 = *(char *)ppuVar11;
        ppuVar11 = (undefined **)((int)ppuVar11 + 1);
      } while (cVar2 != '\0');
      lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
      FUN_0048c520(param_3,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
      return 0;
    }
    pcVar8 = "gname";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045bf41:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045bf46;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045bf41;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045bf46:
    if (uVar7 == 0) {
      *(undefined4 *)(param_2 + 0x40) = 0;
      if (ppuVar12 == (undefined **)0x0) {
        FUN_0048d570((int *)(param_2 + 0x3c),(uint *)0x0,0);
        return 0;
      }
      ppuVar11 = ppuVar12;
      do {
        cVar2 = *(char *)ppuVar11;
        ppuVar11 = (undefined **)((int)ppuVar11 + 1);
      } while (cVar2 != '\0');
      FUN_0048d570((int *)(param_2 + 0x3c),(uint *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1));
      return 0;
    }
    break;
  case 0x68:
    pcVar8 = "hdrcharset";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045bfc0:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045bfc5;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045bfc0;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045bfc5:
    if (uVar7 == 0) {
      pcVar8 = "BINARY";
      ppuVar11 = ppuVar12;
      do {
        bVar1 = *(byte *)ppuVar11;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045bff4:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045bff9;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)ppuVar11 + 1);
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045bff4;
        ppuVar11 = (undefined **)((int)ppuVar11 + 2);
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045bff9:
      if (uVar7 == 0) {
        *(undefined4 *)(param_2 + 0x84) = 1;
        return 0;
      }
      pcVar8 = "ISO-IR 10646 2000 UTF-8";
      do {
        bVar1 = *(byte *)ppuVar12;
        bVar13 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_0045c038:
          uVar7 = -(uint)bVar13 | 1;
          goto LAB_0045c03d;
        }
        if (bVar1 == 0) break;
        bVar1 = *(byte *)((int)ppuVar12 + 1);
        bVar13 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_0045c038;
        ppuVar12 = (undefined **)((int)ppuVar12 + 2);
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_0045c03d:
      if (uVar7 == 0) {
        *(undefined4 *)(param_2 + 0x84) = 0;
        return 0;
      }
    }
    break;
  case 0x6c:
    pcVar8 = "linkpath";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045c080:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045c085;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045c080;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045c085:
    if (uVar7 == 0) {
      *(undefined4 *)(param_2 + 0x28) = 0;
      if (ppuVar12 == (undefined **)0x0) {
        FUN_0048d570((int *)(param_2 + 0x24),(uint *)0x0,0);
        return 0;
      }
      ppuVar11 = ppuVar12;
      do {
        cVar2 = *(char *)ppuVar11;
        ppuVar11 = (undefined **)((int)ppuVar11 + 1);
      } while (cVar2 != '\0');
      FUN_0048d570((int *)(param_2 + 0x24),(uint *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1));
      return 0;
    }
    break;
  case 0x6d:
    pcVar8 = "mtime";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045c100:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045c105;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045c100;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045c105:
    if (uVar7 == 0) {
      FUN_0045ca40((char *)ppuVar12,&local_8,(int *)&param_5);
      FUN_0048c650(param_3,(uint)local_8,local_8._4_4_,(int)param_5);
      return 0;
    }
    break;
  case 0x70:
    pbVar6 = (byte *)0x5266c8;
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0045c166:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045c16b;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0045c166;
      param_4 = param_4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045c16b:
    if (uVar7 == 0) {
      *(undefined4 *)(param_2 + 0x10) = 0;
      if (ppuVar12 == (undefined **)0x0) {
        FUN_0048d570((int *)(param_2 + 0xc),(uint *)0x0,0);
        return 0;
      }
      ppuVar11 = ppuVar12;
      do {
        cVar2 = *(char *)ppuVar11;
        ppuVar11 = (undefined **)((int)ppuVar11 + 1);
      } while (cVar2 != '\0');
      FUN_0048d570((int *)(param_2 + 0xc),(uint *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1));
      return 0;
    }
    break;
  case 0x73:
    pbVar6 = &DAT_00526960;
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_0045c1e8:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045c1ed;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_0045c1e8;
      param_4 = param_4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045c1ed:
    if (uVar7 != 0) {
      return 0;
    }
    ppuVar11 = ppuVar12;
    do {
      cVar2 = *(char *)ppuVar11;
      ppuVar11 = (undefined **)((int)ppuVar11 + 1);
    } while (cVar2 != '\0');
    lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
    iVar5 = (int)((ulonglong)lVar14 >> 0x20);
    *(longlong *)(param_2 + 0x90) = lVar14;
    if ((iVar5 != 0 && -1 < lVar14) || (-1 < lVar14)) {
      if (lVar14 != 0x7fffffffffffffff) {
        if (*(int *)(param_2 + 0x110) != 0) {
          return 0;
        }
        FUN_0048c7c0(param_3,(int)lVar14,iVar5);
        *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0x90);
        *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_2 + 0x94);
        return 0;
      }
      *(undefined4 *)(param_2 + 0x90) = 0;
      *(undefined4 *)(param_2 + 0x94) = 0;
      pcVar8 = "Tar size attribute overflow";
    }
    else {
      *(undefined4 *)(param_2 + 0x90) = 0;
      *(undefined4 *)(param_2 + 0x94) = 0;
      pcVar8 = "Tar size attribute is negative";
    }
LAB_0045b233:
    FUN_00487380(param_1,0xffffffff,(int)pcVar8);
    return 0xffffffe2;
  case 0x75:
    pbVar10 = &DAT_00527b58;
    do {
      bVar1 = *pbVar6;
      bVar13 = bVar1 < *pbVar10;
      if (bVar1 != *pbVar10) {
LAB_0045c2e0:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045c2e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar13 = bVar1 < pbVar10[1];
      if (bVar1 != pbVar10[1]) goto LAB_0045c2e0;
      pbVar6 = pbVar6 + 2;
      pbVar10 = pbVar10 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045c2e5:
    if (uVar7 == 0) {
      ppuVar11 = ppuVar12;
      do {
        cVar2 = *(char *)ppuVar11;
        ppuVar11 = (undefined **)((int)ppuVar11 + 1);
      } while (cVar2 != '\0');
      lVar14 = FUN_0045d790((char *)ppuVar12,(int)ppuVar11 - ((int)ppuVar12 + 1),10);
      FUN_0048c8b0(param_3,(int)lVar14,(int)((ulonglong)lVar14 >> 0x20));
      return 0;
    }
    pcVar8 = "uname";
    do {
      bVar1 = *param_4;
      bVar13 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_0045c341:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_0045c346;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar13 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_0045c341;
      param_4 = param_4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_0045c346:
    if (uVar7 == 0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      if (ppuVar12 == (undefined **)0x0) {
        uVar7 = 0;
      }
      else {
        ppuVar11 = ppuVar12;
        do {
          cVar2 = *(char *)ppuVar11;
          ppuVar11 = (undefined **)((int)ppuVar11 + 1);
        } while (cVar2 != '\0');
        uVar7 = (int)ppuVar11 - ((int)ppuVar12 + 1);
      }
      FUN_0048d570((int *)(param_2 + 0x30),(uint *)ppuVar12,uVar7);
    }
  }
  return 0;
}


