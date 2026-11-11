// Function: thunk_FUN_004a48e0
// Entry: 0046bd40
// Size: 5 bytes
// Thunk: true
// External: false


void __cdecl thunk_FUN_004a48e0(int param_1,LPVOID param_2)

{
  if ((param_1 != 0) && (param_2 != (LPVOID)0x0)) {
    if (*(code **)(param_1 + 0x260) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a4902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x260))();
      return;
    }
    FUN_0047d191(param_2);
  }
  return;
}


