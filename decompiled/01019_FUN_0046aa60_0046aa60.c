// Function: FUN_0046aa60
// Entry: 0046aa60
// Size: 61 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0046aa60(int param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)param_3)(param_2,0xd);
  if (iVar1 != 0) {
    iVar1 = (*(code *)param_3)(param_2,10);
    if (iVar1 != 0) {
      iVar1 = FUN_0046aa3b(param_1,param_2,param_3);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}


