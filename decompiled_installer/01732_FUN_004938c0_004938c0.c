// Function: FUN_004938c0
// Entry: 004938c0
// Size: 88 bytes
// Thunk: false
// External: false


void __cdecl FUN_004938c0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  if (9 < iVar1) {
    FUN_004938c0(param_1,iVar1 / 10);
  }
  *(char *)*param_1 = "0123456789"[iVar1 % 10];
  *param_1 = *param_1 + 1;
  return;
}


