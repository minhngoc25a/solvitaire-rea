// Function: FUN_00469d30
// Entry: 00469d30
// Size: 30 bytes
// Thunk: false
// External: false


void FUN_00469d30(int param_1)

{
  int *piVar1;
  
  piVar1 = TlsGetValue(DAT_0053fba8);
  piVar1[2] = param_1;
  *(undefined2 *)(param_1 + *piVar1) = 0;
  return;
}


