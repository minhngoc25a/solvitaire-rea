// Function: FUN_0046f190
// Entry: 0046f190
// Size: 40 bytes
// Thunk: false
// External: false


void FUN_0046f190(int param_1)

{
  code *pcVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0x4c) != (code *)0x0)) {
    (**(code **)(param_1 + 0x4c))(param_1,&DAT_005236fc);
  }
  FUN_0046f790(param_1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


