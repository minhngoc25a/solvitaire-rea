// Function: FUN_00497a00
// Entry: 00497a00
// Size: 102 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00497a00(uint param_1,LPCVOID param_2,DWORD param_3)

{
  __acrt_ptd *p_Var1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  LPCVOID lpBuffer;
  uint *lpNumberOfBytesWritten;
  LPOVERLAPPED lpOverlapped;
  
  if ((int)param_1 < 0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 9;
    return 0xffffffff;
  }
  lpOverlapped = (LPOVERLAPPED)0x0;
  lpNumberOfBytesWritten = &param_1;
  lpBuffer = param_2;
  DVar3 = param_3;
  hFile = (HANDLE)FUN_004c58b7(param_1);
  BVar2 = WriteFile(hFile,lpBuffer,DVar3,lpNumberOfBytesWritten,lpOverlapped);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 5) {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 9;
      return 0xffffffff;
    }
    FUN_00497cb0(DVar3);
    return 0xffffffff;
  }
  return param_1;
}


