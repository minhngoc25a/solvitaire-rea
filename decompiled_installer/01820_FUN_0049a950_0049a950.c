// Function: FUN_0049a950
// Entry: 0049a950
// Size: 19 bytes
// Thunk: false
// External: false


void FUN_0049a950(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
                    /* WARNING: Could not recover jumptable at 0x0049a961. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 8) + 8))();
  return;
}


