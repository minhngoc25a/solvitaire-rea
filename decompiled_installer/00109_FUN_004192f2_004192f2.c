// Function: FUN_004192f2
// Entry: 004192f2
// Size: 207 bytes
// Thunk: false
// External: false


uint FUN_004192f2(int *param_1,LPCWSTR param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined3 extraout_var;
  uint uVar3;
  HANDLE local_c;
  LPVOID local_8;
  int local_4;
  
  uVar3 = 0;
  if ((param_2 == (LPCWSTR)0x0) || (*param_2 == L'\0')) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined4 *)FUN_004258d0(DAT_00542b3c,param_1);
    if ((puVar2 != (undefined4 *)0x0) &&
       (local_c = CreateFileW(param_2,0xc0000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0),
       local_c != (HANDLE)0xffffffff)) {
      local_8 = HeapAlloc(DAT_00542264,0,0x1000);
      if (local_8 != (LPVOID)0x0) {
        local_4 = 0;
        uVar3 = FUN_0046a941(puVar2,&local_c,&LAB_004192ae,param_3);
        if ((uVar3 != 0) && (0 < local_4)) {
          bVar1 = FUN_00419281(&local_c);
          uVar3 = CONCAT31(extraout_var,bVar1);
        }
        HeapFree(DAT_00542264,0,local_8);
      }
      CloseHandle(local_c);
    }
  }
  return uVar3;
}


