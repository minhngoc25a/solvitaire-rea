// Function: FUN_00424250
// Entry: 00424250
// Size: 36 bytes
// Thunk: false
// External: false


int FUN_00424250(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = TlsGetValue(DAT_0053fba8);
  piVar2[0x67] = piVar2[0x67] + -1;
  iVar1 = piVar2[piVar2[0x67] + 3];
  piVar2[2] = iVar1;
  return *piVar2 + iVar1;
}


