// Function: FUN_004c5110
// Entry: 004c5110
// Size: 43 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c5110(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    pcVar1 = (code *)*param_1;
    if (pcVar1 != (code *)0x0) {
      (*(code *)PTR_guard_check_icall_00532084)();
      (*pcVar1)();
    }
  }
  return;
}


