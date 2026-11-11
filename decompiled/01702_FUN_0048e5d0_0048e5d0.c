// Function: FUN_0048e5d0
// Entry: 0048e5d0
// Size: 771 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048e5d0(int *param_1,uint *param_2,uint param_3,DWORD param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined1 uVar3;
  UINT CodePage;
  int *piVar4;
  uint *puVar5;
  DWORD DVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  int local_c;
  uint local_8;
  int local_4;
  
  if (param_4 == 0) {
    CodePage = FUN_0048e4b0();
  }
  else {
    CodePage = *(UINT *)(param_4 + 0xc);
  }
  if (CodePage == 0) {
    piVar4 = FUN_0048d4d0(param_1,(LPVOID)((param_1[1] + param_3) * 2 + 2));
    if (piVar4 == (int *)0x0) {
      return 0xffffffff;
    }
    iVar9 = 0;
    puVar7 = (ushort *)(*param_1 + param_1[1] * 2);
    if (0 < (int)param_3) {
      do {
        pbVar1 = (byte *)(iVar9 + (int)param_2);
        if (*pbVar1 == 0) break;
        iVar9 = iVar9 + 1;
        *puVar7 = (ushort)*pbVar1;
        puVar7 = puVar7 + 1;
      } while (iVar9 < (int)param_3);
    }
  }
  else {
    uVar10 = param_3;
    if (param_4 == 0) {
LAB_0048e834:
      param_4 = 0;
      param_3 = uVar10;
    }
    else {
      uVar10 = *(uint *)(param_4 + 0x18);
      if ((uVar10 & 0xc0) != 0) {
        uVar8 = 0;
        *(uint *)(param_4 + 0x18) = uVar10 | 0x1000;
        if ((uVar10 & 0x2800) == 0) {
          if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
            do {
              if (*(char *)(uVar8 + (int)param_2) == '\0') break;
              uVar8 = uVar8 + 1;
            } while (uVar8 < param_3);
          }
        }
        else if (param_2 != (uint *)0x0) {
          puVar5 = param_2;
          if (param_3 >> 1 != 0) {
            do {
              if (((char)*puVar5 == '\0') && (*(char *)((int)puVar5 + 1) == '\0')) break;
              uVar8 = uVar8 + 1;
              puVar5 = (uint *)((int)puVar5 + 2);
            } while (uVar8 < param_3 >> 1);
          }
          uVar8 = uVar8 * 2;
        }
        local_c = *param_1;
        local_8 = param_1[1] * 2;
        local_4 = param_1[2];
        if ((uVar10 & 0x40) == 0) {
          uVar11 = FUN_00490810(&local_c,(undefined1 *)param_2,uVar8,param_4);
        }
        else {
          uVar11 = FUN_0048f700(&local_c,(undefined1 *)param_2,uVar8,param_4);
        }
        *param_1 = local_c;
        param_1[1] = local_8 >> 1;
        param_1[2] = local_4;
        *(uint *)(param_4 + 0x18) = uVar10;
        return uVar11;
      }
      if ((uVar10 & 0x2800) != 0) {
        uVar10 = 0;
        if (param_2 != (uint *)0x0) {
          puVar5 = param_2;
          if (param_3 >> 1 != 0) {
            do {
              if (((char)*puVar5 == '\0') && (*(char *)((int)puVar5 + 1) == '\0')) break;
              uVar10 = uVar10 + 1;
              puVar5 = (uint *)((int)puVar5 + 2);
            } while (uVar10 < param_3 >> 1);
          }
          uVar10 = uVar10 * 2;
        }
        iVar9 = (int)uVar10 >> 1;
        piVar4 = FUN_0048d4d0(param_1,(LPVOID)((param_1[1] + iVar9) * 2 + 2));
        if (piVar4 == (int *)0x0) {
          return 0xffffffff;
        }
        FUN_0044c490((uint *)(*param_1 + param_1[1] * 2),param_2,iVar9 * 2);
        if ((*(uint *)(param_4 + 0x18) & 0x800) != 0) {
          iVar12 = 0;
          iVar2 = *param_1 + param_1[1] * 2;
          if (0 < iVar9) {
            do {
              uVar3 = *(undefined1 *)(iVar2 + iVar12 * 2);
              *(undefined1 *)(iVar2 + iVar12 * 2) = *(undefined1 *)(iVar2 + 1 + iVar12 * 2);
              *(undefined1 *)(iVar2 + 1 + iVar12 * 2) = uVar3;
              iVar12 = iVar12 + 1;
            } while (iVar12 < iVar9);
          }
        }
        goto LAB_0048e645;
      }
      if ((uVar10 & 2) != 0) {
        uVar10 = 0;
        if ((param_2 != (uint *)0x0) && (param_3 != 0)) {
          do {
            if (*(char *)(uVar10 + (int)param_2) == '\0') break;
            uVar10 = uVar10 + 1;
          } while (uVar10 < param_3);
        }
        goto LAB_0048e834;
      }
      param_4 = 1;
    }
    piVar4 = FUN_0048d4d0(param_1,(LPVOID)((param_1[1] + param_3) * 2 + 2));
    while( true ) {
      if (piVar4 == (int *)0x0) {
        return 0xffffffff;
      }
      iVar9 = MultiByteToWideChar(CodePage,param_4,(LPCSTR)param_2,param_3,
                                  (LPWSTR)(*param_1 + param_1[1] * 2),((uint)param_1[2] >> 1) - 1);
      if (iVar9 != 0) goto LAB_0048e645;
      DVar6 = GetLastError();
      if (DVar6 != 0x7a) break;
      piVar4 = FUN_0048d4d0(param_1,(LPVOID)(param_1[2] << 2));
    }
    if (param_3 != 0) {
      uVar11 = 0xffffffff;
      goto LAB_0048e647;
    }
  }
LAB_0048e645:
  uVar11 = 0;
LAB_0048e647:
  piVar4 = param_1 + 1;
  *piVar4 = *piVar4 + iVar9;
  *(undefined2 *)(*param_1 + *piVar4 * 2) = 0;
  return uVar11;
}


