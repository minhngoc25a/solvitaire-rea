// Function: FUN_00424f79
// Entry: 00424f79
// Size: 523 bytes
// Thunk: false
// External: false


HANDLE __cdecl FUN_00424f79(uint param_1,char *param_2,int *param_3,int *param_4)

{
  HANDLE hObject;
  bool bVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  BOOL BVar4;
  HANDLE pvVar5;
  DWORD DVar6;
  _STARTUPINFOW local_70;
  _PROCESS_INFORMATION local_2c;
  HANDLE local_1c;
  HANDLE local_18;
  WORD local_14 [2];
  char *local_10;
  uchar *local_c;
  LPVOID local_8;
  
  if ((param_2 == (char *)0x0) || (param_3 == (int *)0x0)) {
LAB_00424f87:
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    return (HANDLE)0xffffffff;
  }
  if (4 < param_1) {
    p_Var2 = FUN_00424721();
    *(undefined4 *)p_Var2 = 0;
    goto LAB_00424f87;
  }
  local_10 = (char *)0x0;
  local_8 = (LPVOID)0x0;
  iVar3 = FUN_0048081a(param_3,param_4,&local_10,&local_8);
  if (iVar3 == -1) {
    FUN_004247be(local_8);
    local_8 = (LPVOID)0x0;
    FUN_004247be(local_10);
    return (HANDLE)0xffffffff;
  }
  local_c = (uchar *)0x0;
  bVar1 = accumulate_inheritable_handles(&local_c,(uint *)local_14,param_1 != 4);
  if (!bVar1) {
    FUN_004247be(local_c);
    local_c = (uchar *)0x0;
    FUN_004247be(local_8);
    local_8 = (LPVOID)0x0;
    FUN_004247be(local_10);
    return (HANDLE)0xffffffff;
  }
  DVar6 = 0;
  if (param_1 == 4) {
    DVar6 = 8;
  }
  p_Var2 = FUN_00424721();
  *(undefined4 *)p_Var2 = 0;
  _memset(&local_70,0,0x44);
  local_70.cbReserved2 = local_14[0];
  local_70.lpReserved2 = local_c;
  local_70.cb = 0x44;
  BVar4 = ___acrt_CreateProcessA
                    (param_2,local_10,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,1,DVar6,
                     local_8,(char *)0x0,&local_70,&local_2c);
  hObject = local_2c.hProcess;
  if (BVar4 != 0) {
    if (param_1 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00480228(0);
    }
    if (param_1 != 0) {
      if (param_1 != 4) {
        if (local_2c.hThread != (HANDLE)0xffffffff) {
          CloseHandle(local_2c.hThread);
        }
        FUN_004247be(local_c);
        local_c = (uchar *)0x0;
        FUN_004247be(local_8);
        local_8 = (LPVOID)0x0;
        FUN_004247be(local_10);
        return local_2c.hProcess;
      }
      if (local_2c.hThread != (HANDLE)0xffffffff) {
        CloseHandle(local_2c.hThread);
      }
      if (local_2c.hProcess != (HANDLE)0xffffffff) {
        CloseHandle(local_2c.hProcess);
      }
      pvVar5 = (HANDLE)0x0;
      goto LAB_00425124;
    }
    WaitForSingleObject(local_2c.hProcess,0xffffffff);
    BVar4 = GetExitCodeProcess(local_2c.hProcess,(LPDWORD)&local_18);
    if (BVar4 != 0) {
      local_1c = local_18;
      if (local_2c.hThread != (HANDLE)0xffffffff) {
        CloseHandle(local_2c.hThread);
      }
      pvVar5 = local_1c;
      if (hObject != (HANDLE)0xffffffff) {
        CloseHandle(hObject);
        pvVar5 = local_1c;
      }
      goto LAB_00425124;
    }
  }
  DVar6 = GetLastError();
  ___acrt_errno_map_os_error(DVar6);
  if (local_2c.hThread != (HANDLE)0xffffffff) {
    CloseHandle(local_2c.hThread);
  }
  pvVar5 = (HANDLE)0xffffffff;
  if (hObject != (HANDLE)0xffffffff) {
    CloseHandle(hObject);
  }
LAB_00425124:
  FUN_004247be(local_c);
  local_c = (uchar *)0x0;
  FUN_004247be(local_8);
  local_8 = (LPVOID)0x0;
  FUN_004247be(local_10);
  return pvVar5;
}


