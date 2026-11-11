// Function: FUN_00405840
// Entry: 00405840
// Size: 58 bytes
// Thunk: false
// External: false


void __fastcall FUN_00405840(undefined4 param_1,int param_2)

{
  int *in_EAX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  if (*in_EAX != 0) {
    FUN_00405840(param_1,param_2);
    param_1 = extraout_ECX;
  }
  FUN_00405820(param_1,param_2);
  if (in_EAX[1] != 0) {
    FUN_00405840(extraout_ECX_00,param_2);
  }
  free(in_EAX);
  return;
}


