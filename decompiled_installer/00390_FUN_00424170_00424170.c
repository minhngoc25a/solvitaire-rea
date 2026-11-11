// Function: FUN_00424170
// Entry: 00424170
// Size: 17 bytes
// Thunk: false
// External: false


void FUN_00424170(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_0053fba8);
  *(int *)((int)pvVar1 + 8) = *(int *)((int)pvVar1 + 8) + 2;
  return;
}


