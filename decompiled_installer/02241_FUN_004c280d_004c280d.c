// Function: FUN_004c280d
// Entry: 004c280d
// Size: 37 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c280d(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_004247be((LPVOID)*param_1);
  }
  return;
}


