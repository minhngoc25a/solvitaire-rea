// Function: FUN_0047dbd2
// Entry: 0047dbd2
// Size: 26 bytes
// Thunk: false
// External: false


undefined4 FUN_0047dbd2(void)

{
  wchar_t *pwVar1;
  
  pwVar1 = DAT_00540688;
  if (DAT_00540688 != (wchar_t *)0xffffffff) {
    pwVar1 = (wchar_t *)FUN_004815b7(DAT_00540688);
    DAT_00540688 = (wchar_t *)0xffffffff;
  }
  return CONCAT31((int3)((uint)pwVar1 >> 8),1);
}


