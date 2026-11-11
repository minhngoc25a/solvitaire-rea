// Function: FUN_004a4890
// Entry: 004a4890
// Size: 66 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a4890(int param_1,SIZE_T param_2)

{
  int iVar1;
  
  if (param_1 != 0) {
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
    FUN_0046f1c0(param_1,"Out of memory");
  }
  return 0;
}


