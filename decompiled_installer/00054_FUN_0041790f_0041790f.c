// Function: FUN_0041790f
// Entry: 0041790f
// Size: 48 bytes
// Thunk: false
// External: false


void __cdecl FUN_0041790f(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_2 == (int *)0x0) {
    piVar1 = FUN_004257cc(param_1,0x10);
  }
  else {
    piVar1 = FUN_0044e7e4(param_2,0x10);
  }
  *piVar1 = param_3;
  piVar1[1] = param_4;
  return;
}


