// Function: FUN_0047d690
// Entry: 0047d690
// Size: 79 bytes
// Thunk: false
// External: false


void FUN_0047d690(void)

{
  undefined4 *lpTlsValue;
  LPVOID pvVar1;
  
  lpTlsValue = HeapAlloc(DAT_0054358c,0,0x1a0);
  pvVar1 = HeapAlloc(DAT_0054358c,0,0x10);
  *lpTlsValue = pvVar1;
  lpTlsValue[1] = 0x10;
  lpTlsValue[2] = 0;
  lpTlsValue[0x67] = 0;
  TlsSetValue(DAT_0053fba8,lpTlsValue);
  return;
}


