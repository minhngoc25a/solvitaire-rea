// Function: FUN_00423f50
// Entry: 00423f50
// Size: 57 bytes
// Thunk: false
// External: false


void FUN_00423f50(void)

{
  LPVOID pvVar1;
  
  if (DAT_0053fba8 == 0xffffffff) {
    FUN_00424190();
  }
  else {
    pvVar1 = TlsGetValue(DAT_0053fba8);
    if (pvVar1 != (LPVOID)0x0) {
      return;
    }
    FUN_0047d690();
  }
  pvVar1 = TlsGetValue(DAT_0053fba8);
  FUN_0047d4f9(&LAB_00423f20,pvVar1);
  return;
}


