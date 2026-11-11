// Function: FUN_00503ad0
// Entry: 00503ad0
// Size: 125 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00503ad0(undefined4 *param_1,DWORD param_2,ALG_ID param_3)

{
  HCRYPTPROV *phProv;
  BOOL BVar1;
  DWORD DVar2;
  
  phProv = param_1 + 1;
  *param_1 = 0;
  BVar1 = CryptAcquireContextW(phProv,(LPCWSTR)0x0,(LPCWSTR)0x0,param_2,0xf0000000);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 != 0x80090016) {
      return 0xffffffe7;
    }
    BVar1 = CryptAcquireContextW(phProv,(LPCWSTR)0x0,(LPCWSTR)0x0,param_2,8);
    if (BVar1 == 0) {
      return 0xffffffe7;
    }
  }
  BVar1 = CryptCreateHash(*phProv,param_3,0,0,param_1 + 2);
  if (BVar1 == 0) {
    CryptReleaseContext(*phProv,0);
    return 0xffffffe7;
  }
  *param_1 = 1;
  return 0;
}


