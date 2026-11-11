// Function: FUN_0047fd52
// Entry: 0047fd52
// Size: 85 bytes
// Thunk: false
// External: false


undefined4 FUN_0047fd52(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  if (DAT_00544358 != (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = FUN_004c4440();
  if (puVar1 == (uint *)0x0) {
    FUN_004247be((LPVOID)0x0);
    return 0xffffffff;
  }
  puVar2 = FUN_0047ff46((short *)puVar1);
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    DAT_00544358 = puVar2;
    DAT_0054435c = puVar2;
  }
  FUN_004247be((LPVOID)0x0);
  FUN_004247be(puVar1);
  return uVar3;
}


