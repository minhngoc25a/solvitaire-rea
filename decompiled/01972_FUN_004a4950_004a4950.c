// Function: FUN_004a4950
// Entry: 004a4950
// Size: 86 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a4950(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  SIZE_T SVar2;
  
  if (((int)param_2 < 1) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0046f190(param_1);
  }
  if ((param_2 <= (uint)(0xffffffff / (ulonglong)param_3)) &&
     (SVar2 = param_2 * param_3, SVar2 != 0)) {
    if ((param_1 != 0) && (*(code **)(param_1 + 0x25c) != (code *)0x0)) {
      uVar1 = (**(code **)(param_1 + 0x25c))(param_1,SVar2);
      return uVar1;
    }
    uVar1 = FUN_00482949(SVar2);
    return uVar1;
  }
  return 0;
}


