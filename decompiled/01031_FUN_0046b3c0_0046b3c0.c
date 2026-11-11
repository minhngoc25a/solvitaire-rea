// Function: FUN_0046b3c0
// Entry: 0046b3c0
// Size: 37 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046b3c0(int param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (-1 < (int)param_2) {
      uVar1 = param_2;
    }
    if (8 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0046f190(param_1);
    }
    *(char *)(param_1 + 0x155) = (char)uVar1;
  }
  return;
}


