// Function: FUN_004544f0
// Entry: 004544f0
// Size: 36 bytes
// Thunk: false
// External: false


undefined4 * __thiscall FUN_004544f0(void *this,undefined4 *param_1)

{
  FUN_004247be(*(LPVOID *)this);
  *(undefined4 *)this = 0;
  *(undefined4 *)this = *param_1;
  *param_1 = 0;
  return this;
}


