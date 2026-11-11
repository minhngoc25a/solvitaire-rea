// Function: FUN_0047a7be
// Entry: 0047a7be
// Size: 193 bytes
// Thunk: false
// External: false


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0047a7be(uint param_1)

{
  undefined4 *lpTlsValue;
  
  lpTlsValue = HeapAlloc(DAT_00542264,8,0x18c);
  TlsSetValue(DAT_005434a0,lpTlsValue);
  _DAT_005434a4 = lpTlsValue;
  lpTlsValue[0x2a] = 0;
  lpTlsValue[0x2b] = 0xffffffff;
  lpTlsValue[0x2c] = 0xffffffff;
  lpTlsValue[0x29] = 0xffffff;
  lpTlsValue[0x1d] = 2;
  lpTlsValue[0x1e] = 0x3f;
  FUN_004b809f(lpTlsValue,param_1);
  lpTlsValue[0x16] = &LAB_0047ba59;
  lpTlsValue[0x17] = &LAB_0047baa5;
  lpTlsValue[4] = FUN_0047a925;
  lpTlsValue[0xc] = &LAB_0047aaf7;
  lpTlsValue[0x19] = &LAB_0047ad37;
  lpTlsValue[0x18] = &LAB_0047ad83;
  lpTlsValue[0xd] = &LAB_0047b3bd;
  lpTlsValue[9] = &LAB_0047b26f;
  lpTlsValue[10] = &LAB_0047b298;
  lpTlsValue[0xb] = &LAB_0047b2c3;
  lpTlsValue[0x11] = &LAB_0047b84e;
  lpTlsValue[0x1a] = &LAB_0047a8b0;
  lpTlsValue[0x1b] = &LAB_0047a90f;
  return lpTlsValue;
}


