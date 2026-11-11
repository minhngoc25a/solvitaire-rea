// Function: FUN_0047e22f
// Entry: 0047e22f
// Size: 11 bytes
// Thunk: false
// External: false


undefined4 FUN_0047e22f(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005441f0;
  LOCK();
  DAT_005441f0 = 1;
  UNLOCK();
  return uVar1;
}


