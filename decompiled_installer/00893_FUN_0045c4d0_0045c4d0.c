// Function: FUN_0045c4d0
// Entry: 0045c4d0
// Size: 623 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0045c4d0(undefined4 param_1,int *param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint *unaff_EBX;
  SIZE_T unaff_EBP;
  byte *pbVar11;
  uint uVar12;
  bool bVar13;
  
  piVar5 = param_2;
  do {
    iVar9 = *piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
  } while ((char)iVar9 != '\0');
  if (0x11 < (uint)((int)piVar5 - ((int)param_2 + 1))) {
    pcVar8 = "LIBARCHIVE.xattr.";
    uVar12 = 0xd;
    piVar5 = param_2;
    do {
      if (*piVar5 != *(int *)pcVar8) {
        return 3;
      }
      piVar5 = piVar5 + 1;
      pcVar8 = (char *)((int)pcVar8 + 4);
      bVar13 = 3 < uVar12;
      uVar12 = uVar12 - 4;
    } while (bVar13);
    if ((char)*piVar5 == (char)*(int *)pcVar8) {
      pbVar11 = (byte *)((int)param_2 + 0x11);
      pbVar6 = pbVar11;
      do {
        bVar4 = *pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (bVar4 != 0);
      pbVar6 = (byte *)FUN_00482949((SIZE_T)(pbVar6 + (1 - ((int)param_2 + 0x12))));
      if (pbVar6 == (byte *)0x0) {
        return 2;
      }
      bVar4 = *pbVar11;
      pbVar1 = pbVar6;
      while (bVar4 != 0) {
        if (((bVar4 == 0x25) && (pbVar11[1] != 0)) && (pbVar11[2] != 0)) {
          iVar9 = (int)(char)pbVar11[1];
          uVar12 = iVar9 - 0x30;
          if (9 < uVar12) {
            if (iVar9 - 0x41U < 6) {
              uVar12 = iVar9 - 0x37;
            }
            else if (iVar9 - 0x61U < 6) {
              uVar12 = iVar9 - 0x57;
            }
            else {
              uVar12 = 0xffffffff;
            }
          }
          iVar9 = (int)(char)pbVar11[2];
          uVar7 = iVar9 - 0x30;
          if (9 < uVar7) {
            if (iVar9 - 0x41U < 6) {
              uVar7 = iVar9 - 0x37;
            }
            else if (iVar9 - 0x61U < 6) {
              uVar7 = iVar9 - 0x57;
            }
            else {
              uVar7 = 0xffffffff;
            }
          }
          if (((int)uVar12 < 0) || ((int)uVar7 < 0)) goto LAB_0045c5d4;
          pbVar11 = pbVar11 + 3;
          bVar4 = (char)uVar12 << 4 | (byte)uVar7;
        }
        else {
LAB_0045c5d4:
          bVar4 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        }
        *pbVar1 = bVar4;
        pbVar1 = pbVar1 + 1;
        bVar4 = *pbVar11;
      }
      *pbVar1 = 0;
      pbVar11 = param_3;
      do {
        bVar4 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar4 != 0);
      uVar12 = (int)pbVar11 - (int)(param_3 + 1);
      if (DAT_005437ea != '\x01') {
        _memset(&DAT_005437a8,0xff,0x80);
        uVar7 = 0;
        do {
          (&DAT_005437a8)
          [(byte)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [uVar7]] = (char)uVar7;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0x40);
      }
      puVar3 = (undefined1 *)FUN_00482949((uVar12 - (uVar12 >> 2)) + 1);
      puVar2 = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
        FUN_0047d191(pbVar6);
        return 1;
      }
      do {
        if (uVar12 == 0) {
          FUN_00493970(param_1,pbVar6,(int)puVar3,puVar2 + -(int)puVar3,unaff_EBX,unaff_EBP);
          FUN_0047d191(pbVar6);
          FUN_0047d191(puVar3);
          return 0;
        }
        uVar7 = 0;
        iVar9 = 0;
        do {
          if (uVar12 == 0) break;
          bVar4 = *param_3;
          if ((bVar4 == 0x3d) || (bVar4 == 0x5f)) {
            uVar12 = 0;
            break;
          }
          if (((byte)(bVar4 - 0x20) < 0x60) && ((&DAT_005437a8)[bVar4] != 0xff)) {
            uVar7 = uVar7 << 6 | (uint)(byte)(&DAT_005437a8)[bVar4];
            iVar9 = iVar9 + 1;
          }
          uVar12 = uVar12 - 1;
          param_3 = param_3 + 1;
        } while (iVar9 < 4);
        iVar10 = uVar7 << (('\x04' - (char)iVar9) * '\x06' & 0x1fU);
        if (iVar9 == 2) {
LAB_0045c6e9:
          *puVar2 = (char)((uint)iVar10 >> 0x10);
        }
        else {
          if (iVar9 == 3) {
LAB_0045c6e1:
            puVar2[1] = (char)((uint)iVar10 >> 8);
            goto LAB_0045c6e9;
          }
          if (iVar9 == 4) {
            puVar2[2] = (char)iVar10;
            goto LAB_0045c6e1;
          }
        }
        puVar2 = puVar2 + ((int)(iVar9 * 3 + (iVar9 * 3 >> 0x1f & 3U)) >> 2);
      } while( true );
    }
  }
  return 3;
}


