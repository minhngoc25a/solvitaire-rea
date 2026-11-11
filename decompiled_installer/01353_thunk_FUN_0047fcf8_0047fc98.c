// Function: thunk_FUN_0047fcf8
// Entry: 0047fc98
// Size: 5 bytes
// Thunk: true
// External: false


undefined4 thunk_FUN_0047fcf8(void)

{
  LPSTR pCVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (DAT_00544354 != (undefined4 *)0x0) {
    return 0;
  }
  ___acrt_initialize_multibyte();
  pCVar1 = FUN_004c43a0();
  if (pCVar1 == (LPSTR)0x0) {
    FUN_004247be((LPVOID)0x0);
    return 0xffffffff;
  }
  puVar2 = FUN_0047fe64(pCVar1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_00544354 = puVar2;
    DAT_00544360 = puVar2;
  }
  FUN_004247be((LPVOID)0x0);
  FUN_004247be(pCVar1);
  return uVar3;
}


