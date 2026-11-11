// Function: FUN_00460ee8
// Entry: 00460ee8
// Size: 249 bytes
// Thunk: false
// External: false


int FUN_00460ee8(int *param_1,LPCWSTR param_2,LPCWSTR param_3)

{
  int *piVar1;
  uint uVar2;
  HANDLE hFile;
  uint *lpBuffer;
  uint *nNumberOfBytesToWrite;
  int iVar3;
  int iVar4;
  undefined4 unaff_EDI;
  int iVar5;
  DWORD local_4;
  
  iVar3 = -1;
  iVar5 = 0;
  if ((param_3 == (LPCWSTR)0x0) || (*param_3 == L'\0')) {
    if (param_1[5] == 0) {
      return -1;
    }
    uVar2 = FUN_0048bcc0(param_1[5]);
    if ((short)uVar2 == 0x4000) {
      return -1;
    }
    piVar1 = (int *)param_1[5];
  }
  else {
    piVar1 = FUN_00461336(param_1,param_3);
  }
  iVar4 = iVar3;
  if ((piVar1 != (int *)0x0) &&
     (hFile = CreateFileW(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0),
     hFile != (HANDLE)0xffffffff)) {
    lpBuffer = HeapAlloc(DAT_00542264,0,0x200000);
    if (lpBuffer != (uint *)0x0) {
      while( true ) {
        nNumberOfBytesToWrite = FUN_004883b0(*param_1,lpBuffer,0x200000,unaff_EDI);
        iVar4 = iVar5;
        if ((nNumberOfBytesToWrite == (uint *)0x0) ||
           (iVar4 = iVar3, (int)nNumberOfBytesToWrite < 0)) break;
        WriteFile(hFile,lpBuffer,(DWORD)nNumberOfBytesToWrite,&local_4,(LPOVERLAPPED)0x0);
        iVar5 = iVar5 + (int)nNumberOfBytesToWrite;
      }
      HeapFree(DAT_00542264,0,lpBuffer);
    }
    CloseHandle(hFile);
    if (iVar4 == -1) {
      DeleteFileW(param_2);
    }
  }
  return iVar4;
}


