// Function: FUN_0044ca75
// Entry: 0044ca75
// Size: 34 bytes
// Thunk: false
// External: false


void __cdecl FUN_0044ca75(short *param_1,short *param_2)

{
  short sVar1;
  
  do {
    sVar1 = *param_2;
    param_2 = param_2 + 1;
    *param_1 = sVar1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  return;
}


