// Function: FUN_0047ee2e
// Entry: 0047ee2e
// Size: 751 bytes
// Thunk: false
// External: false


void __cdecl FUN_0047ee2e(int param_1,int param_2,wchar_t *param_3)

{
  short *psVar1;
  short sVar2;
  size_t sVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  wchar_t *pwVar9;
  wchar_t wVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  bool bVar13;
  wchar_t *local_1d0;
  int local_1cc;
  size_t local_1c8;
  undefined4 local_1c4;
  undefined4 *local_1c0;
  short local_1bc [86];
  wchar_t local_110 [132];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_1cc = param_1;
  if (param_2 != 0) {
    if (param_3 != (wchar_t *)0x0) {
      FUN_0047e8d3(param_1,param_2,param_3);
    }
    goto LAB_0047f0fd;
  }
  local_1c8 = 1;
  puVar11 = (undefined4 *)0x0;
  local_1c0 = (undefined4 *)0x0;
  if (param_3 != (wchar_t *)0x0) {
    if (((*param_3 == L'L') && (param_3[1] == L'C')) && (param_3[2] == L'_')) {
      do {
        local_1d0 = _wcspbrk(param_3,L"=;");
        if (((local_1d0 == (wchar_t *)0x0) ||
            (sVar3 = (int)local_1d0 - (int)param_3 >> 1, local_1c8 = sVar3, sVar3 == 0)) ||
           (*local_1d0 == L';')) goto LAB_0047f0fd;
        ppuVar12 = &PTR_u_LC_COLLATE_0050e1ac;
        local_1c4 = 1;
        do {
          iVar4 = _wcsncmp((wchar_t *)*ppuVar12,param_3,sVar3);
          if (iVar4 == 0) {
            psVar8 = (short *)*ppuVar12;
            psVar1 = psVar8 + 1;
            do {
              sVar2 = *psVar8;
              psVar8 = psVar8 + 1;
            } while (sVar2 != 0);
            if (sVar3 == (int)psVar8 - (int)psVar1 >> 1) break;
          }
          local_1c4 = local_1c4 + 1;
          ppuVar12 = ppuVar12 + 3;
        } while ((int)ppuVar12 < 0x50e1dd);
        pwVar5 = local_1d0 + 1;
        sVar3 = _wcscspn(pwVar5,L";");
        param_1 = local_1cc;
        if ((sVar3 == 0) && (*pwVar5 != L';')) goto LAB_0047f0fd;
        if (local_1c4 < 6) {
          iVar4 = FUN_004c2925(local_110,0x83,(int)pwVar5,sVar3);
          if (iVar4 != 0) {
LAB_0047f111:
                    /* WARNING: Subroutine does not return */
            __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          if (0x105 < sVar3 * 2) {
            FUN_0048202b();
            goto LAB_0047f111;
          }
          local_110[sVar3] = L'\0';
          iVar4 = FUN_0047e8d3(param_1,local_1c4,local_110);
          if (iVar4 != 0) {
            local_1c0 = (undefined4 *)((int)local_1c0 + 1);
          }
        }
        param_3 = pwVar5 + sVar3;
        wVar10 = L'\0';
        if (*param_3 != L'\0') {
          param_3 = param_3 + 1;
          wVar10 = *param_3;
        }
        puVar11 = local_1c0;
      } while (wVar10 != L'\0');
    }
    else {
      iVar4 = FUN_0047e31f(param_3,local_110,0x83,local_1bc,0x55,&local_1d0);
      if (iVar4 == 0) goto LAB_0047f0fd;
      local_1c0 = (undefined4 *)(param_1 + 0x20);
      iVar4 = 0;
      do {
        if (iVar4 != 0) {
          pwVar9 = (wchar_t *)*local_1c0;
          pwVar5 = local_110;
          do {
            bVar13 = (ushort)*pwVar5 < (ushort)*pwVar9;
            if (*pwVar5 != *pwVar9) {
LAB_0047f099:
              uVar6 = -(uint)bVar13 | 1;
              goto LAB_0047f0a0;
            }
            if (*pwVar5 == L'\0') break;
            wVar10 = pwVar5[1];
            bVar13 = (ushort)wVar10 < (ushort)pwVar9[1];
            local_1c4 = CONCAT22(wVar10,(undefined2)local_1c4);
            if (wVar10 != pwVar9[1]) goto LAB_0047f099;
            pwVar5 = pwVar5 + 2;
            pwVar9 = pwVar9 + 2;
          } while (wVar10 != L'\0');
          uVar6 = 0;
LAB_0047f0a0:
          param_1 = local_1cc;
          if (uVar6 == 0) {
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          else {
            iVar7 = FUN_0047e8d3(local_1cc,iVar4,local_110);
            if (iVar7 == 0) {
              local_1c8 = 0;
            }
            else {
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
          }
        }
        iVar4 = iVar4 + 1;
        local_1c0 = local_1c0 + 4;
      } while (iVar4 < 6);
      if (local_1c8 != 0) goto LAB_0047f0f6;
    }
    if (puVar11 == (undefined4 *)0x0) goto LAB_0047f0fd;
  }
LAB_0047f0f6:
  FUN_0047ec93(param_1);
LAB_0047f0fd:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


