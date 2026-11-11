// Function: FUN_00423ccb
// Entry: 00423ccb
// Size: 107 bytes
// Thunk: false
// External: false


int FUN_00423ccb(int param_1)

{
  LPVOID lpTlsValue;
  undefined4 *puVar1;
  
  lpTlsValue = TlsGetValue(DAT_00543588);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = HeapAlloc(DAT_00542264,8,DAT_00543584);
    TlsSetValue(DAT_00543588,lpTlsValue);
    for (puVar1 = DAT_00543580; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if ((code *)puVar1[3] != (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2] + (int)lpTlsValue);
      }
    }
    FUN_0047d4f9(&LAB_00423dee,lpTlsValue);
  }
  return param_1 + (int)lpTlsValue;
}


