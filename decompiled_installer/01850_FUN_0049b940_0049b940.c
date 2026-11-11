// Function: FUN_0049b940
// Entry: 0049b940
// Size: 36 bytes
// Thunk: false
// External: false


bool __cdecl FUN_0049b940(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 4))(*(int *)(param_1 + 0x1c));
  if (cVar1 != '\0') {
    return false;
  }
  bVar2 = FUN_0049cf20(param_1);
  return bVar2;
}


