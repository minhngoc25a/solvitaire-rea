// Function: FUN_00497f50
// Entry: 00497f50
// Size: 566 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00497f50(HANDLE param_1,uint *param_2)

{
  ushort uVar1;
  DWORD DVar2;
  __acrt_ptd *p_Var3;
  BOOL BVar4;
  ushort uVar5;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  _BY_HANDLE_FILE_INFORMATION local_34;
  
  DVar2 = GetFileType(param_1);
  switch(DVar2) {
  case 0:
    p_Var3 = FUN_0042470e();
    *(undefined4 *)p_Var3 = 9;
    return 0xffffffff;
  case 1:
    _memset(&local_34,0,0x34);
    BVar4 = GetFileInformationByHandle(param_1,&local_34);
    if (BVar4 != 0) {
      uVar5 = 0x1b6;
      if ((local_34.dwFileAttributes & 1) != 0) {
        uVar5 = 0x124;
      }
      uVar1 = 0x4049;
      if ((local_34.dwFileAttributes & 0x10) == 0) {
        uVar1 = 0x8000;
      }
      *(ushort *)(param_2 + 0xe) = uVar5 | uVar1;
      FUN_00497e70(&local_34.ftLastAccessTime.dwLowDateTime,&local_3c,(int *)&local_40);
      *param_2 = local_3c;
      param_2[2] = local_40;
      param_2[1] = uStack_38;
      FUN_00497e70(&local_34.ftLastWriteTime.dwLowDateTime,&local_3c,(int *)&local_40);
      param_2[8] = local_3c;
      param_2[10] = local_40;
      param_2[9] = uStack_38;
      FUN_00497e70(&local_34.ftCreationTime.dwLowDateTime,&local_3c,(int *)&local_40);
      param_2[4] = local_3c;
      param_2[6] = local_40;
      param_2[5] = uStack_38;
      param_2[0x10] = local_34.nFileSizeLow;
      param_2[0x11] = local_34.nFileSizeHigh;
      param_2[0xc] = local_34.nFileIndexLow;
      param_2[0xd] = (uint)(ushort)local_34.nFileIndexHigh;
      param_2[0xf] = local_34.nNumberOfLinks;
      if ((local_34.dwFileAttributes & 0x10) != 0) {
        param_2[0xf] = local_34.nNumberOfLinks + 1;
      }
      param_2[0x13] = local_34.dwVolumeSerialNumber;
      *(undefined2 *)(param_2 + 0x12) = 0;
      *(undefined2 *)(param_2 + 0xb) = 0;
      param_2[0x14] = 0;
      return 0;
    }
  default:
    DVar2 = GetLastError();
    FUN_00497cb0(DVar2);
    return 0xffffffff;
  case 2:
  case 3:
    break;
  }
  if (DVar2 == 2) {
    *(undefined2 *)(param_2 + 0xe) = 0x2000;
  }
  else {
    *(undefined2 *)(param_2 + 0xe) = 0x1000;
    BVar4 = PeekNamedPipe(param_1,(LPVOID)0x0,0,(LPDWORD)0x0,&local_40,(LPDWORD)0x0);
    local_3c = local_40;
    if (BVar4 != 0) goto LAB_00497fab;
  }
  local_3c = 0;
LAB_00497fab:
  param_2[0x10] = local_3c;
  param_2[0x11] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xf] = 1;
  *(undefined2 *)(param_2 + 0x12) = 0;
  *(undefined2 *)(param_2 + 0xb) = 0;
  param_2[0x14] = 0;
  param_2[0x13] = 0;
  return 0;
}


