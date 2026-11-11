// Function: FUN_004246ae
// Entry: 004246ae
// Size: 41 bytes
// Thunk: false
// External: false


undefined4 __fastcall FUN_004246ae(int param_1)

{
  DWORD dwErrCode;
  
  if (*(char *)(param_1 + 8) == '\0') {
    dwErrCode = GetLastError();
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 8) = 1;
    SetLastError(dwErrCode);
    return 0;
  }
  return *(undefined4 *)(param_1 + 4);
}


