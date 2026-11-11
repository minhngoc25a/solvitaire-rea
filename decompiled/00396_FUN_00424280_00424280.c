// Function: FUN_00424280
// Entry: 00424280
// Size: 33 bytes
// Thunk: false
// External: false


int FUN_00424280(void)

{
  int *piVar1;
  
  piVar1 = TlsGetValue(DAT_0053fba8);
  piVar1[0x67] = piVar1[0x67] + -1;
  return piVar1[piVar1[0x67] + 3] + *piVar1;
}


