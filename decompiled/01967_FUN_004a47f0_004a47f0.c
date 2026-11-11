// Function: FUN_004a47f0
// Entry: 004a47f0
// Size: 58 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a47f0(int param_1,SIZE_T param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x25c) == (code *)0x0) {
      iVar1 = FUN_00482949(param_2);
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x25c))(param_1);
    }
    if (iVar1 != 0) {
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


