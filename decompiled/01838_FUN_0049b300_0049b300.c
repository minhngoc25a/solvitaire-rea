// Function: FUN_0049b300
// Entry: 0049b300
// Size: 39 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049b300(LPVOID param_1,int param_2)

{
  if ((param_2 != 0) && (*(code **)(param_2 + 4) != (code *)0x0)) {
    (**(code **)(param_2 + 4))(*(undefined4 *)(param_2 + 8),param_1);
    return;
  }
  FUN_0047d191(param_1);
  return;
}


