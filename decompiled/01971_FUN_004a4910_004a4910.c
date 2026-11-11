// Function: FUN_004a4910
// Entry: 004a4910
// Size: 49 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004a4910(int param_1,SIZE_T param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 != 0) && (*(code **)(param_1 + 0x25c) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x004a4932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x25c))();
    return uVar1;
  }
  uVar1 = FUN_00482949(param_2);
  return uVar1;
}


