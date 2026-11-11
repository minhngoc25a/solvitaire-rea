// Function: FUN_00474250
// Entry: 00474250
// Size: 26 bytes
// Thunk: false
// External: false


uint __cdecl FUN_00474250(int param_1,int param_2,uint param_3)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    return *(uint *)(param_2 + 8) & param_3;
  }
  return 0;
}


