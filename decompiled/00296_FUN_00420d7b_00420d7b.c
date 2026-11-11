// Function: FUN_00420d7b
// Entry: 00420d7b
// Size: 140 bytes
// Thunk: false
// External: false


undefined4 FUN_00420d7b(HICON param_1,LPCWSTR param_2)

{
  HANDLE hFile;
  LPCWSTR dwBytes;
  short *lpBuffer;
  BOOL BVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  hFile = CreateFileW(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    dwBytes = (LPCWSTR)GetFileSize(hFile,(LPDWORD)0x0);
    lpBuffer = HeapAlloc(DAT_00542264,0,(SIZE_T)dwBytes);
    if (lpBuffer != (short *)0x0) {
      BVar1 = ReadFile(hFile,lpBuffer,(DWORD)dwBytes,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
      if ((BVar1 != 0) && (param_2 == dwBytes)) {
        uVar2 = FUN_00420745(param_1,lpBuffer,(int)dwBytes);
      }
      HeapFree(DAT_00542264,0,lpBuffer);
    }
    CloseHandle(hFile);
  }
  return uVar2;
}


