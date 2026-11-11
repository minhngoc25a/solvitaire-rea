// Function: FUN_00424668
// Entry: 00424668
// Size: 70 bytes
// Thunk: false
// External: false


__acrt_ptd * __fastcall FUN_00424668(undefined4 *param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  undefined4 *local_8;
  
  local_8 = param_1;
  local_8 = (undefined4 *)GetLastError();
  if (*(char *)(param_1 + 2) == '\0') {
    iVar1 = 0;
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = 0;
  }
  else {
    iVar1 = param_1[1];
  }
  p_Var2 = FUN_0047ddee(&local_8,iVar1);
  *param_1 = p_Var2;
  SetLastError((DWORD)local_8);
  return p_Var2;
}


