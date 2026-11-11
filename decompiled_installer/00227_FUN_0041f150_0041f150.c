// Function: FUN_0041f150
// Entry: 0041f150
// Size: 67 bytes
// Thunk: false
// External: false


DWORD FUN_0041f150(undefined4 *param_1)

{
  DWORD local_4;
  
  local_4 = 0;
  if (param_1[5] == 0) {
    WriteFile((HANDLE)*param_1,(LPCVOID)param_1[1],param_1[2] - param_1[3],&local_4,
              (LPOVERLAPPED)0x0);
    param_1[3] = param_1[2];
    return local_4;
  }
  return 0;
}


