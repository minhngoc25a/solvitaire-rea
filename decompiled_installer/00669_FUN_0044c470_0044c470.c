// Function: FUN_0044c470
// Entry: 0044c470
// Size: 26 bytes
// Thunk: false
// External: false


void FUN_0044c470(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_0053fba8);
  *(int *)((int)pvVar1 + 8) = *(int *)((int)pvVar1 + 8) + param_1 * -2;
  return;
}


