// Function: FUN_0048e280
// Entry: 0048e280
// Size: 546 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0048e280(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  UINT UVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  byte local_10 [8];
  char local_8 [8];
  
  if (param_1 != (byte *)0x0) {
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (bVar1 != 0);
    if ((uint)((int)pbVar6 - (int)(param_1 + 1)) < 0x10) {
      pbVar6 = local_10;
      bVar1 = *param_1;
      while (bVar1 != 0) {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
        bVar3 = bVar1 - 0x20;
        if (0x19 < (byte)(bVar1 + 0x9f)) {
          bVar3 = bVar1;
        }
        *pbVar6 = bVar3;
        pbVar6 = pbVar6 + 1;
        bVar1 = bVar2;
      }
      *pbVar6 = 0;
      uVar9 = 0xffffffff;
      iVar8 = 0;
      iVar11 = 0x5a;
      do {
        pbVar6 = local_10;
        iVar10 = (iVar11 + iVar8) / 2;
        pbVar7 = (&PTR_s_ASCII_00540860)[iVar10 * 2];
        do {
          bVar1 = *pbVar7;
          bVar12 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_0048e315:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_0048e31a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar12 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_0048e315;
          pbVar7 = pbVar7 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_0048e31a:
        if ((int)uVar4 < 0) {
          iVar8 = iVar10 + 1;
          iVar10 = iVar11;
        }
        else if ((int)uVar4 < 1) {
          return *(uint *)(iVar10 * 8 + 0x540864);
        }
        iVar11 = iVar10;
      } while (iVar8 < iVar10);
      if (local_10[0] == 0x43) {
        if ((local_10[1] == 'P') && ((byte)(local_10[2] - 0x30) < 10)) {
          uVar9 = FUN_00491880((char *)(local_10 + 2));
          return uVar9;
        }
        pbVar7 = &DAT_00529010;
        pbVar6 = local_10;
        do {
          bVar1 = *pbVar6;
          bVar12 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0048e430:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_0048e435;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar12 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0048e430;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_0048e435:
        if (uVar4 == 0) {
          UVar5 = FUN_0048e4b0();
          return UVar5;
        }
        pbVar7 = &DAT_00529004;
        pbVar6 = local_10;
        do {
          bVar1 = *pbVar6;
          bVar12 = bVar1 < *pbVar7;
          if (bVar1 != *pbVar7) {
LAB_0048e471:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_0048e476;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar12 = bVar1 < pbVar7[1];
          if (bVar1 != pbVar7[1]) goto LAB_0048e471;
          pbVar6 = pbVar6 + 2;
          pbVar7 = pbVar7 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_0048e476:
        if (uVar4 == 0) {
          uVar9 = FUN_0048e540();
        }
      }
      else if (local_10[0] == 0x49) {
        if (((local_10[1] == 'B') && (local_10[2] == 'M')) && ((byte)(local_10[3] - 0x30) < 10)) {
          uVar9 = FUN_00491880((char *)(local_10 + 3));
          return uVar9;
        }
      }
      else if (((local_10[0] == 0x57) &&
               (iVar8 = _strncmp((char *)local_10,"WINDOWS-",8), iVar8 == 0)) &&
              ((uVar9 = FUN_00491880(local_8), uVar9 != 0x36a &&
               ((uVar9 < 0x4e2 || (0x4ea < uVar9)))))) {
        return 0xffffffff;
      }
      return uVar9;
    }
  }
  return 0xffffffff;
}


