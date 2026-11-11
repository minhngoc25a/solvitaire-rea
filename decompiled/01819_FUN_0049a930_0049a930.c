// Function: FUN_0049a930
// Entry: 0049a930
// Size: 23 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049a930(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0049a945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 4))();
  return uVar1;
}


