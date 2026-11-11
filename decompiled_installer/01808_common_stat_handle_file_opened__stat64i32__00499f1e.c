// Function: common_stat_handle_file_opened<_stat64i32>
// Entry: 00499f1e
// Size: 368 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    bool __cdecl common_stat_handle_file_opened<struct _stat64i32>(wchar_t const * const,int,void *
   const,struct _stat64i32 &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl
common_stat_handle_file_opened<_stat64i32>
          (wchar_t *param_1,int param_2,void *param_3,_stat64i32 *param_4)

{
  _FILETIME _Var1;
  _FILETIME _Var2;
  _FILETIME _Var3;
  bool bVar4;
  undefined1 uVar5;
  ushort uVar6;
  DWORD DVar7;
  BOOL BVar8;
  __acrt_ptd *p_Var9;
  uint uVar10;
  __int64 _Var11;
  int local_44;
  wchar_t *local_40;
  _BY_HANDLE_FILE_INFORMATION local_3c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  DVar7 = GetFileType(param_3);
  uVar10 = DVar7 & 0xffff7fff;
  if (uVar10 == 1) {
    *(undefined2 *)(param_4 + 8) = 1;
    if (local_40 != (wchar_t *)0x0) {
      local_44 = 0;
      bVar4 = get_drive_number_from_path(local_40,&local_44);
      if (!bVar4) goto LAB_0049a07f;
      *(int *)(param_4 + 0x10) = local_44 + -1;
      *(int *)param_4 = local_44 + -1;
    }
    _memset(&local_3c,0,0x34);
    BVar8 = GetFileInformationByHandle(param_3,&local_3c);
    if (BVar8 != 0) {
      uVar6 = convert_to_stat_mode(local_3c.dwFileAttributes,local_40);
      *(ushort *)(param_4 + 6) = uVar6;
      _Var3.dwHighDateTime = local_3c.ftLastWriteTime.dwHighDateTime;
      _Var3.dwLowDateTime = local_3c.ftLastWriteTime.dwLowDateTime;
      _Var11 = convert_filetime_to_time_t<__int64>(_Var3,0);
      *(__int64 *)(param_4 + 0x20) = _Var11;
      _Var2.dwHighDateTime = local_3c.ftLastAccessTime.dwHighDateTime;
      _Var2.dwLowDateTime = local_3c.ftLastAccessTime.dwLowDateTime;
      _Var11 = convert_filetime_to_time_t<__int64>(_Var2,_Var11);
      *(__int64 *)(param_4 + 0x18) = _Var11;
      _Var1.dwHighDateTime = local_3c.ftCreationTime.dwHighDateTime;
      _Var1.dwLowDateTime = local_3c.ftCreationTime.dwLowDateTime;
      _Var11 = convert_filetime_to_time_t<__int64>(_Var1,*(__int64 *)(param_4 + 0x20));
      *(__int64 *)(param_4 + 0x28) = _Var11;
      compute_size(&local_3c,(long *)(param_4 + 0x14));
      goto LAB_0049a07f;
    }
  }
  else {
    if ((uVar10 == 2) || (uVar10 == 3)) {
      *(ushort *)(param_4 + 6) = ((uVar10 != 2) - 1 & 0x1000) + 0x1000;
      *(undefined2 *)(param_4 + 8) = 1;
      *(int *)(param_4 + 0x10) = param_2;
      *(int *)param_4 = param_2;
      if ((uVar10 != 2) &&
         (BVar8 = PeekNamedPipe(param_3,(LPVOID)0x0,0,(LPDWORD)0x0,(LPDWORD)&local_40,(LPDWORD)0x0),
         BVar8 != 0)) {
        *(wchar_t **)(param_4 + 0x14) = local_40;
      }
      goto LAB_0049a07f;
    }
    if (uVar10 == 0) {
      p_Var9 = FUN_0042470e();
      *(undefined4 *)p_Var9 = 9;
      goto LAB_0049a07f;
    }
  }
  DVar7 = GetLastError();
  ___acrt_errno_map_os_error(DVar7);
LAB_0049a07f:
  uVar5 = FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}


