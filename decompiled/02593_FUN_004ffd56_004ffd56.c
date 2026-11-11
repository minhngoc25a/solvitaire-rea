// Function: FUN_004ffd56
// Entry: 004ffd56
// Size: 24 bytes
// Thunk: false
// External: false


undefined4 * __fastcall FUN_004ffd56(undefined4 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}


