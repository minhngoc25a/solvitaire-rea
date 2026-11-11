// Function: FUN_0046f790
// Entry: 0046f790
// Size: 12 bytes
// Thunk: false
// External: false


void FUN_0046f790(int param_1)

{
  code *pcVar1;
  
  FUN_0046f130(param_1,1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


