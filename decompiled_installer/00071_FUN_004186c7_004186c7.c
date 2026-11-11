// Function: FUN_004186c7
// Entry: 004186c7
// Size: 282 bytes
// Thunk: false
// External: false


undefined4 FUN_004186c7(int *param_1,byte *param_2,LPCWSTR param_3,LPCWSTR param_4)

{
  LPSTR _Str;
  byte *lpMem;
  LPCWSTR pWVar1;
  size_t sVar2;
  LPCWSTR nNumberOfBytesToWrite;
  undefined4 local_18;
  LPCWSTR local_14;
  int local_10;
  LPCWSTR local_c;
  int local_8;
  short local_4;
  
  local_18 = 0;
  _Str = FUN_0044e6a0(param_4);
  if ((*param_1 != 0) &&
     (lpMem = HeapAlloc(DAT_00542264,0,(SIZE_T)(param_3 + 0xc)), lpMem != (byte *)0x0)) {
    pWVar1 = (LPCWSTR)FUN_00469b35(param_2,(uint)param_3,(undefined4 *)lpMem,(int)(param_3 + 0xc),
                                   param_1[8],(undefined *)0x0);
    nNumberOfBytesToWrite = param_3;
    if ((pWVar1 != (LPCWSTR)0x0) && ((int)pWVar1 < (int)param_3)) {
      nNumberOfBytesToWrite = pWVar1;
      param_2 = lpMem;
    }
    sVar2 = _strlen(_Str);
    local_4 = (short)sVar2;
    local_10 = (int)param_3 >> 0x1f;
    local_14 = param_3;
    local_8 = (int)nNumberOfBytesToWrite >> 0x1f;
    local_c = nNumberOfBytesToWrite;
    WriteFile((HANDLE)*param_1,&local_14,0x12,(LPDWORD)&param_4,(LPOVERLAPPED)0x0);
    if (((param_4 == (LPCWSTR)0x12) &&
        (WriteFile((HANDLE)*param_1,_Str,(int)local_4,(LPDWORD)&param_4,(LPOVERLAPPED)0x0),
        (LPCWSTR)(int)local_4 == param_4)) &&
       (WriteFile((HANDLE)*param_1,param_2,(DWORD)nNumberOfBytesToWrite,(LPDWORD)&param_4,
                  (LPOVERLAPPED)0x0), nNumberOfBytesToWrite == param_4)) {
      local_18 = 1;
    }
    FUN_00469628((int)param_1);
    HeapFree(DAT_00542264,0,lpMem);
  }
  FUN_0044e5a0(_Str);
  return local_18;
}


