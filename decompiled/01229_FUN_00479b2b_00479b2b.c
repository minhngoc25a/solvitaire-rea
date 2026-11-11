// Function: FUN_00479b2b
// Entry: 00479b2b
// Size: 32 bytes
// Thunk: false
// External: false


void __cdecl FUN_00479b2b(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = param_2 - (int)param_1;
    do {
      *param_1 = param_1[iVar1];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}


