// Function: FUN_00423b0c
// Entry: 00423b0c
// Size: 37 bytes
// Thunk: false
// External: false


int FUN_00423b0c(int *param_1,LPCWSTR param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  FARPROC pFVar1;
  int iVar2;
  
  pFVar1 = FUN_00423c03(param_1,param_2);
  if (pFVar1 == (FARPROC)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*pFVar1)(param_3,param_4,param_5);
  }
  return iVar2;
}


