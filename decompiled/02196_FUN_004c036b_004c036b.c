// Function: FUN_004c036b
// Entry: 004c036b
// Size: 679 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c036b(uint *param_1,LPCWSTR param_2,uint param_3,int *param_4)

{
  char cVar1;
  WCHAR WVar2;
  LPCWSTR pWVar3;
  int iVar4;
  DWORD DVar5;
  WCHAR *pWVar6;
  uint uVar7;
  int local_2c;
  uint local_28;
  uint *local_24;
  uint local_20;
  LPCWSTR local_1c;
  uint local_18;
  int local_14;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  local_24 = param_1;
  local_1c = param_2;
  local_14 = 0;
  if ((param_1 != (uint *)0x0) && (param_3 == 0)) goto LAB_004c0603;
  if (param_2 == (LPCWSTR)0x0) {
    *(undefined1 *)(param_4 + 7) = 1;
    param_4[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_4);
    goto LAB_004c0603;
  }
  if ((char)param_4[5] == '\0') {
    FUN_0044ef90(param_4);
  }
  iVar4 = param_4[3];
  local_18 = *(uint *)(iVar4 + 8);
  if (local_18 == 0xfde9) {
    local_2c = 0;
    local_28 = 0;
    FUN_004ff360(local_24,&local_1c,param_3,&local_2c,(int)param_4);
    goto LAB_004c0603;
  }
  local_28 = *(uint *)(iVar4 + 0xa8);
  if (local_24 == (uint *)0x0) {
    if (local_28 == 0) {
      WVar2 = *local_1c;
      pWVar6 = local_1c;
      while (WVar2 != L'\0') {
        if (0xff < (ushort)WVar2) goto LAB_004c05f5;
        pWVar6 = pWVar6 + 1;
        WVar2 = *pWVar6;
      }
      goto LAB_004c0603;
    }
    iVar4 = FUN_004c42a4(local_18,0,local_1c,-1,(LPSTR)0x0,0,0,&local_14);
joined_r0x004c05ea:
    if ((iVar4 != 0) && (local_14 == 0)) goto LAB_004c0603;
  }
  else {
    if (*(int *)(iVar4 + 0xa8) == 0) {
      if (param_3 != 0) {
        do {
          if (0xff < (ushort)*local_1c) goto LAB_004c05f5;
          *(char *)((int)local_24 + uVar7) = (char)*local_1c;
          WVar2 = *local_1c;
          local_1c = local_1c + 1;
        } while ((WVar2 != L'\0') && (uVar7 = uVar7 + 1, uVar7 < param_3));
      }
      goto LAB_004c0603;
    }
    if (*(int *)(iVar4 + 4) == 1) {
      if (param_3 != 0) {
        local_20 = param_3;
        pWVar3 = local_1c;
        do {
          if (*pWVar3 == L'\0') {
            param_3 = ((int)pWVar3 - (int)local_1c >> 1) + 1;
            break;
          }
          pWVar3 = pWVar3 + 1;
          local_20 = local_20 - 1;
        } while (local_20 != 0);
      }
      iVar4 = FUN_004c42a4(local_18,0,local_1c,param_3,(LPSTR)local_24,param_3,0,&local_14);
      goto joined_r0x004c05ea;
    }
    local_18 = FUN_004c42a4(local_18,0,local_1c,-1,(LPSTR)local_24,param_3,0,&local_14);
    if (local_14 == 0) {
      if (local_18 != 0) goto LAB_004c0603;
      DVar5 = GetLastError();
      if (DVar5 == 0x7a) {
        if (param_3 != 0) {
          do {
            iVar4 = *(int *)(param_4[3] + 4);
            if (5 < iVar4) {
              iVar4 = 5;
            }
            local_28 = FUN_004c42a4(*(uint *)(param_4[3] + 8),0,local_1c,1,local_10,iVar4,0,
                                    &local_14);
            if ((((local_28 == 0) || (local_14 != 0)) || ((int)local_28 < 0)) || (5 < local_28))
            goto LAB_004c05f5;
            if (param_3 < local_28 + local_18) break;
            local_20 = 0;
            if (0 < (int)local_28) {
              do {
                cVar1 = local_10[local_20];
                *(char *)((int)local_24 + local_18) = cVar1;
                if (cVar1 == '\0') goto LAB_004c0603;
                local_20 = local_20 + 1;
                local_18 = local_18 + 1;
              } while ((int)local_20 < (int)local_28);
            }
            local_1c = local_1c + 1;
          } while (local_18 < param_3);
        }
        goto LAB_004c0603;
      }
    }
  }
LAB_004c05f5:
  param_4[6] = 0x2a;
  *(undefined1 *)(param_4 + 7) = 1;
LAB_004c0603:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


