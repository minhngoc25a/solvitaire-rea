// Function: FUN_00417e50
// Entry: 00417e50
// Size: 29 bytes
// Thunk: false
// External: false


uint FUN_00417e50(LPCWSTR param_1,uint param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_00453575(param_1);
  if (pbVar1 != (byte *)0x0) {
    param_2 = FUN_00453682(pbVar1);
  }
  return param_2;
}


