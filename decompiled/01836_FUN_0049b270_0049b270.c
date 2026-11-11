// Function: FUN_0049b270
// Entry: 0049b270
// Size: 50 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049b270(SIZE_T param_1,undefined4 *param_2)

{
  SIZE_T SVar1;
  
  SVar1 = 1;
  if (param_1 != 0) {
    SVar1 = param_1;
  }
  if ((param_2 != (undefined4 *)0x0) && ((code *)*param_2 != (code *)0x0)) {
    (*(code *)*param_2)(param_2[2],1,SVar1);
    return;
  }
  FUN_00482949(SVar1);
  return;
}


