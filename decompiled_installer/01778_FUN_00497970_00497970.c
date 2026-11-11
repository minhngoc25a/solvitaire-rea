// Function: FUN_00497970
// Entry: 00497970
// Size: 139 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00497970(uint param_1,LPVOID param_2,DWORD param_3)

{
  __acrt_ptd *p_Var1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD DVar3;
  
  if ((int)param_1 < 0) {
    p_Var1 = FUN_0042470e();
    *(undefined4 *)p_Var1 = 9;
    return 0xffffffff;
  }
  if (param_3 != 0) {
    hFile = (HANDLE)FUN_004c58b7(param_1);
    BVar2 = ReadFile(hFile,param_2,param_3,&param_1,(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      return param_1;
    }
    DVar3 = GetLastError();
    if (DVar3 == 0xe8) {
      p_Var1 = FUN_0042470e();
      *(undefined4 *)p_Var1 = 0xb;
      return 0xffffffff;
    }
    if (DVar3 != 0x6d) {
      if (DVar3 == 5) {
        p_Var1 = FUN_0042470e();
        *(undefined4 *)p_Var1 = 9;
        return 0xffffffff;
      }
      FUN_00497cb0(DVar3);
      return 0xffffffff;
    }
  }
  return 0;
}


