// Function: __wsopen_nolock
// Entry: 004d2493
// Size: 810 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    __wsopen_nolock
   
   Library: Visual Studio 2019 Release */

errno_t __cdecl
__wsopen_nolock(int *UnlockFlag,int *_FileHandle,wchar_t *_Filename,int _OpenFlag,int _ShareFlag,
               int _PermissionFlag,int _SecureFlag)

{
  char *pcVar1;
  uint uVar2;
  byte *pbVar3;
  __acrt_ptd *p_Var4;
  void *pvVar5;
  DWORD DVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  int in_stack_ffffff90;
  uint uVar12;
  byte local_4c [24];
  byte local_34 [4];
  uint local_30;
  int local_28;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  byte local_10;
  void *local_c;
  byte local_5;
  
  pbVar3 = FUN_004d2aff(local_4c,_OpenFlag,_ShareFlag,(byte)_PermissionFlag);
  pbVar8 = local_34;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *(undefined4 *)pbVar8 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    pbVar8 = pbVar8 + 4;
  }
  if (local_28 == -1) {
    p_Var4 = FUN_00424721();
    *(undefined4 *)p_Var4 = 0;
    *_FileHandle = -1;
    goto LAB_004d24d2;
  }
  iVar7 = __alloc_osfhnd();
  *_FileHandle = iVar7;
  if (iVar7 == -1) {
    p_Var4 = FUN_00424721();
    *(undefined4 *)p_Var4 = 0;
    *_FileHandle = -1;
    p_Var4 = FUN_0042470e();
    *(undefined4 *)p_Var4 = 0x18;
    goto LAB_004d24d2;
  }
  local_18 = 0;
  local_1c = 0xc;
  *UnlockFlag = 1;
  local_14 = ~((uint)_OpenFlag >> 7) & 1;
  puVar10 = &local_1c;
  pbVar3 = local_34;
  puVar9 = (undefined4 *)&stack0xffffff90;
  for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *(undefined4 *)pbVar3;
    pbVar3 = pbVar3 + 4;
    puVar9 = puVar9 + 1;
  }
  pwVar11 = _Filename;
  pvVar5 = create_file();
  local_c = pvVar5;
  if (pvVar5 == (void *)0xffffffff) {
    if (((local_30 & 0xc0000000) == 0xc0000000) && ((_OpenFlag & 1U) != 0)) {
      puVar10 = &local_1c;
      local_30 = local_30 & 0x7fffffff;
      pbVar3 = local_34;
      puVar9 = (undefined4 *)&stack0xffffff90;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *(undefined4 *)pbVar3;
        pbVar3 = pbVar3 + 4;
        puVar9 = puVar9 + 1;
      }
      pvVar5 = create_file();
      pwVar11 = _Filename;
      local_c = pvVar5;
      if (pvVar5 != (void *)0xffffffff) goto LAB_004d25b9;
    }
    pbVar3 = (byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38);
    *pbVar3 = *pbVar3 & 0xfe;
    DVar6 = GetLastError();
    ___acrt_errno_map_os_error(DVar6);
  }
  else {
LAB_004d25b9:
    local_c = pvVar5;
    DVar6 = GetFileType(pvVar5);
    if (DVar6 != 0) {
      if (DVar6 == 2) {
        local_34[0] = local_34[0] | 0x40;
      }
      else if (DVar6 == 3) {
        local_34[0] = local_34[0] | 8;
      }
      local_5 = local_34[0];
      FUN_004c5bf5(*_FileHandle,pvVar5);
      local_10 = local_5 | 1;
      local_34[0] = local_10;
      *(byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38) =
           local_10;
      *(undefined1 *)((&DAT_00544378)[*_FileHandle >> 6] + 0x29 + (*_FileHandle & 0x3fU) * 0x38) = 0
      ;
      if (((_OpenFlag & 2U) == 0) || (iVar7 = truncate_ctrl_z_if_present(*_FileHandle), iVar7 == 0))
      {
        local_5 = 0;
        pcVar1 = (char *)*_FileHandle;
        pbVar3 = local_34;
        puVar9 = (undefined4 *)&stack0xffffff88;
        for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar9 = *(undefined4 *)pbVar3;
          pbVar3 = pbVar3 + 4;
          puVar9 = puVar9 + 1;
        }
        iVar7 = FUN_004d2d23((void *)0x0,pcVar1,(byte)pwVar11,(uint)puVar10,in_stack_ffffff90);
        uVar2 = local_30;
        uVar12 = *_FileHandle;
        if (iVar7 == 0) {
          *(byte *)((&DAT_00544378)[(int)uVar12 >> 6] + 0x29 + (uVar12 & 0x3f) * 0x38) = local_5;
          iVar7 = (*_FileHandle & 0x3fU) * 0x38;
          pbVar3 = (byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x2d + iVar7);
          *pbVar3 = *pbVar3 ^ ((byte)((uint)_OpenFlag >> 0x10) ^
                              *(byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x2d + iVar7)) & 1;
          if (((local_10 & 0x48) == 0) && ((_OpenFlag & 8U) != 0)) {
            pbVar3 = (byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x28 +
                             (*_FileHandle & 0x3fU) * 0x38);
            *pbVar3 = *pbVar3 | 0x20;
          }
          if (((local_30 & 0xc0000000) == 0xc0000000) && ((_OpenFlag & 1U) != 0)) {
            CloseHandle(local_c);
            local_30 = uVar2 & 0x7fffffff;
            pbVar3 = local_34;
            puVar10 = (undefined4 *)&stack0xffffff90;
            for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar10 = *(undefined4 *)pbVar3;
              pbVar3 = pbVar3 + 4;
              puVar10 = puVar10 + 1;
            }
            pvVar5 = create_file();
            if (pvVar5 == (void *)0xffffffff) {
              DVar6 = GetLastError();
              ___acrt_errno_map_os_error(DVar6);
              pbVar3 = (byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x28 +
                               (*_FileHandle & 0x3fU) * 0x38);
              *pbVar3 = *pbVar3 & 0xfe;
              FUN_004c5b64(*_FileHandle);
              goto LAB_004d24d2;
            }
            *(void **)((&DAT_00544378)[*_FileHandle >> 6] + 0x18 + (*_FileHandle & 0x3fU) * 0x38) =
                 pvVar5;
          }
          return 0;
        }
      }
      else {
        uVar12 = *_FileHandle;
      }
      FUN_0049d25f(uVar12);
      return iVar7;
    }
    DVar6 = GetLastError();
    ___acrt_errno_map_os_error(DVar6);
    pbVar3 = (byte *)((&DAT_00544378)[*_FileHandle >> 6] + 0x28 + (*_FileHandle & 0x3fU) * 0x38);
    *pbVar3 = *pbVar3 & 0xfe;
    CloseHandle(pvVar5);
    if (DVar6 == 0) {
      p_Var4 = FUN_0042470e();
      *(undefined4 *)p_Var4 = 0xd;
    }
  }
LAB_004d24d2:
  p_Var4 = FUN_0042470e();
  return *(errno_t *)p_Var4;
}


