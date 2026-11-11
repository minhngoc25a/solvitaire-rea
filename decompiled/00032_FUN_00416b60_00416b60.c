// Function: FUN_00416b60
// Entry: 00416b60
// Size: 166 bytes
// Thunk: false
// External: false


undefined4 FUN_00416b60(int param_1,LPCWSTR param_2)

{
  HANDLE hFile;
  LPCWSTR dwBytes;
  int *lpBuffer;
  undefined4 uVar1;
  DWORD local_4;
  
  uVar1 = 0;
  if (DAT_005424ac == 0) {
    return 0;
  }
  hFile = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0x0) {
    dwBytes = (LPCWSTR)GetFileSize(hFile,&local_4);
    lpBuffer = HeapAlloc(DAT_00542264,0,(SIZE_T)dwBytes);
    if (lpBuffer != (int *)0x0) {
      ReadFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
      if (param_2 == dwBytes) {
        uVar1 = FUN_0044b9f0(param_1,lpBuffer,(uint)dwBytes);
      }
      HeapFree(DAT_00542264,0,lpBuffer);
    }
    CloseHandle(hFile);
    return uVar1;
  }
  return 0;
}


