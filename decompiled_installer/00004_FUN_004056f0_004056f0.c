// Function: FUN_004056f0
// Entry: 004056f0
// Size: 138 bytes
// Thunk: false
// External: false


HICON FUN_004056f0(LPCWSTR param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  SHFILEINFOW *pSVar2;
  SHFILEINFOW local_2c0;
  
  FUN_00423f50();
  FUN_00424040(&param_1,param_1);
  pSVar2 = &local_2c0;
  for (iVar1 = 0xad; iVar1 != 0; iVar1 = iVar1 + -1) {
    pSVar2->hIcon = (HICON)0x0;
    pSVar2 = (SHFILEINFOW *)&pSVar2->iIcon;
  }
  SHGetFileInfoW(param_1,0,&local_2c0,0x2b4,0x110);
  FUN_00424120(extraout_ECX,extraout_EDX,param_1);
  return local_2c0.hIcon;
}


