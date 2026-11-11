// Function: FUN_004c5169
// Entry: 004c5169
// Size: 41 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004c5169(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0053fbc0;
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_0053fbc0;
    param_1[1] = iVar1;
    param_1[2] = iVar1;
  }
  return 0;
}


