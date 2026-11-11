// Function: FUN_00499e1e
// Entry: 00499e1e
// Size: 256 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00499e1e(LPCWSTR param_1,_stat64i32 *param_2)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  HANDLE hObject;
  int iVar3;
  undefined4 *puVar4;
  _stat64i32 *p_Var5;
  undefined4 local_38 [12];
  HANDLE local_8;
  
  if (param_2 == (_stat64i32 *)0x0) {
    p_Var2 = FUN_00424721();
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
    return 0xffffffff;
  }
  _memset(local_38,0,0x30);
  puVar4 = local_38;
  p_Var5 = param_2;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)p_Var5 = *puVar4;
    puVar4 = puVar4 + 1;
    p_Var5 = p_Var5 + 4;
  }
  if (param_1 == (LPCWSTR)0x0) {
    p_Var2 = FUN_00424721();
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = FUN_0042470e();
    *(undefined4 *)p_Var2 = 0x16;
    FUN_004243be();
  }
  else {
    hObject = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
    local_8 = hObject;
    if (hObject == (HANDLE)0xffffffff) {
      bVar1 = common_stat_handle_file_not_opened<_stat64i32>(param_1,param_2);
      if (bVar1) {
        return 0;
      }
      _memset(local_38,0,0x30);
      puVar4 = local_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 4;
      }
    }
    else {
      bVar1 = common_stat_handle_file_opened<_stat64i32>(param_1,-1,hObject,param_2);
      if (bVar1) {
        CloseHandle(hObject);
        return 0;
      }
      _memset(local_38,0,0x30);
      puVar4 = local_38;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 4;
      }
      CloseHandle(local_8);
    }
  }
  return 0xffffffff;
}


