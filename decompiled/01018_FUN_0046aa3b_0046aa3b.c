// Function: FUN_0046aa3b
// Entry: 0046aa3b
// Size: 37 bytes
// Thunk: false
// External: false


void __cdecl FUN_0046aa3b(int param_1,undefined4 param_2,undefined *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 1;
  if (0 < param_1) {
    do {
      if (iVar1 == 0) {
        return;
      }
      iVar1 = (*(code *)param_3)(param_2,0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return;
}


