// Function: FUN_00474c7b
// Entry: 00474c7b
// Size: 50 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00474c7b(FILE *param_1,int *param_2)

{
  uint uVar1;
  int extraout_EDX;
  
  uVar1 = FUN_00474ada(param_1,param_2);
  if ((-1 < extraout_EDX) && ((0 < extraout_EDX || (0x7fffffff < uVar1)))) {
    *(undefined1 *)(param_2 + 7) = 1;
    uVar1 = 0xffffffff;
    param_2[6] = 0x16;
  }
  return uVar1;
}


