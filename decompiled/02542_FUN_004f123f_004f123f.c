// Function: FUN_004f123f
// Entry: 004f123f
// Size: 962 bytes
// Thunk: false
// External: false


void __cdecl FUN_004f123f(DWORD *param_1,uint param_2,uint *param_3,int param_4,int *param_5)

{
  undefined1 *puVar1;
  byte bVar2;
  ushort uVar3;
  byte *pbVar4;
  uint *puVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  UINT local_70;
  uint *local_6c;
  HANDLE local_68;
  uint *local_64;
  uint *local_60;
  undefined2 local_5c [2];
  uint *local_58;
  int local_54;
  uint local_50;
  byte *local_4c;
  int local_48;
  undefined4 local_44;
  int *local_40;
  uint *local_3c;
  uint local_38;
  char local_31;
  uint *local_30;
  CHAR local_2c [8];
  undefined1 local_24;
  undefined1 local_23;
  uint local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0050bb45;
  local_10 = ExceptionList;
  local_1c[2] = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_54 = (param_2 & 0x3f) * 0x38;
  local_48 = (int)param_2 >> 6;
  local_64 = param_3;
  local_40 = param_5;
  local_68 = *(HANDLE *)(local_54 + 0x18 + (&DAT_00544378)[local_48]);
  local_58 = (uint *)(param_4 + (int)param_3);
  local_70 = GetConsoleOutputCP();
  if ((char)param_5[5] == '\0') {
    FUN_0044ef90(param_5);
  }
  local_74 = *(int *)(param_5[3] + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = local_64;
  if (local_58 <= local_64) {
LAB_004f15e5:
    ExceptionList = local_10;
    FUN_004257be(local_1c[2] ^ (uint)&stack0xfffffffc);
    return;
  }
  local_4c = (byte *)0x0;
  iVar9 = local_54;
LAB_004f12e4:
  uVar10 = 0;
  local_31 = (char)*local_30;
  local_44 = 0;
  local_38 = 1;
  if (local_74 == 0xfde9) {
    local_4c = (byte *)((&DAT_00544378)[local_48] + 0x2e + iVar9);
    pbVar4 = local_4c;
    local_38 = uVar10;
    do {
      if (*pbVar4 == 0) break;
      local_38 = local_38 + 1;
      pbVar4 = pbVar4 + 1;
    } while ((int)local_38 < 5);
    iVar9 = (int)local_58 - (int)local_30;
    if ((int)local_38 < 1) {
      local_50 = (int)(char)(&DAT_00540d30)[(byte)*local_30] + 1;
      if (iVar9 < (int)local_50) {
        if (0 < iVar9) {
          do {
            *(undefined1 *)((&DAT_00544378)[local_48] + local_54 + 0x2e + uVar10) =
                 *(undefined1 *)(uVar10 + (int)local_30);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < iVar9);
        }
        goto LAB_004f1596;
      }
      local_84 = 0;
      local_80 = 0;
      local_38 = (local_50 == 4) + 1;
      local_3c = local_30;
      iVar8 = FUN_004c705a(&local_84,(ushort *)&local_44,&local_3c,local_38,&local_84,(int)local_40)
      ;
      iVar9 = local_54;
    }
    else {
      local_3c = (uint *)((int)(char)(&DAT_00540d30)[*local_4c] + 1);
      local_50 = (int)local_3c - local_38;
      pbVar4 = local_4c;
      if (iVar9 < (int)local_50) {
        if (0 < iVar9) {
          do {
            puVar1 = (undefined1 *)(uVar10 + (int)local_30);
            iVar8 = (&DAT_00544378)[local_48] + local_54 + uVar10;
            uVar10 = uVar10 + 1;
            *(undefined1 *)(iVar8 + 0x2e + local_38) = *puVar1;
          } while ((int)uVar10 < iVar9);
        }
LAB_004f1596:
        param_1[1] = param_1[1] + iVar9;
        goto LAB_004f15e5;
      }
      do {
        *(byte *)((int)local_1c + uVar10) = *pbVar4;
        uVar10 = uVar10 + 1;
        pbVar4 = pbVar4 + 1;
      } while ((int)uVar10 < (int)local_38);
      if (0 < (int)local_50) {
        FUN_0044c490((uint *)((int)local_1c + local_38),local_30,local_50);
      }
      iVar9 = local_54;
      iVar8 = 0;
      do {
        *(undefined1 *)((&DAT_00544378)[local_48] + local_54 + 0x2e + iVar8) = 0;
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_38);
      local_6c = local_1c;
      local_7c = 0;
      local_78 = 0;
      local_38 = (local_3c == (uint *)0x4) + 1;
      iVar8 = FUN_004c705a(&local_7c,(ushort *)&local_44,&local_6c,local_38,&local_7c,(int)local_40)
      ;
    }
    if (iVar8 == -1) goto LAB_004f15e5;
    puVar5 = (uint *)((int)local_30 + (local_50 - 1));
  }
  else {
    local_50 = (&DAT_00544378)[local_48];
    bVar2 = *(byte *)(local_50 + 0x2d + iVar9);
    if ((bVar2 & 4) == 0) {
      if (*(short *)(*(int *)local_40[3] + (uint)(byte)*local_30 * 2) < 0) {
        local_3c = (uint *)((int)local_30 + 1);
        if (local_3c < local_58) {
          uVar10 = FUN_0048476e((LPWSTR)&local_44,(byte *)local_30,2,local_40);
          puVar5 = local_3c;
          if (uVar10 != 0xffffffff) goto LAB_004f14bd;
        }
        else {
          *(char *)(local_50 + 0x2e + iVar9) = (char)*local_30;
          pbVar4 = (byte *)((&DAT_00544378)[local_48] + 0x2d + iVar9);
          *pbVar4 = *pbVar4 | 4;
          param_1[1] = (DWORD)(local_4c + 1);
        }
        goto LAB_004f15e5;
      }
      uVar10 = 1;
      puVar5 = local_30;
    }
    else {
      uVar3 = CONCAT11(bVar2,*(undefined1 *)(local_50 + 0x2e + iVar9)) & 0xfbff;
      local_24 = (undefined1)uVar3;
      local_23 = (undefined1)*local_30;
      *(char *)(local_50 + 0x2d + iVar9) = (char)(uVar3 >> 8);
      uVar10 = 2;
      puVar5 = (uint *)&local_24;
    }
    uVar10 = FUN_0048476e((LPWSTR)&local_44,(byte *)puVar5,uVar10,local_40);
    puVar5 = local_30;
    if (uVar10 == 0xffffffff) goto LAB_004f15e5;
  }
LAB_004f14bd:
  local_30 = (uint *)((int)puVar5 + 1);
  local_3c = (uint *)FUN_004c42a4(local_70,0,(LPCWSTR)&local_44,local_38,local_2c,5,0,
                                  (undefined4 *)0x0);
  if (local_3c == (uint *)0x0) goto LAB_004f15e5;
  BVar6 = WriteFile(local_68,local_2c,(DWORD)local_3c,(LPDWORD)&local_60,(LPOVERLAPPED)0x0);
  if (BVar6 == 0) {
LAB_004f15dd:
    DVar7 = GetLastError();
    *param_1 = DVar7;
    goto LAB_004f15e5;
  }
  local_4c = (byte *)((param_1[2] - (int)local_64) + (int)local_30);
  param_1[1] = (DWORD)local_4c;
  if (local_60 < local_3c) goto LAB_004f15e5;
  if (local_31 == '\n') {
    local_5c[0] = 0xd;
    BVar6 = WriteFile(local_68,local_5c,1,(LPDWORD)&local_60,(LPOVERLAPPED)0x0);
    if (BVar6 == 0) goto LAB_004f15dd;
    if (local_60 == (uint *)0x0) goto LAB_004f15e5;
    param_1[2] = param_1[2] + 1;
    param_1[1] = param_1[1] + 1;
    local_4c = (byte *)param_1[1];
  }
  if (local_58 <= local_30) goto LAB_004f15e5;
  goto LAB_004f12e4;
}


