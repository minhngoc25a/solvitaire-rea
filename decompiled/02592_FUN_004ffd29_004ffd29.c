// Function: FUN_004ffd29
// Entry: 004ffd29
// Size: 45 bytes
// Thunk: false
// External: false


undefined4 * __thiscall FUN_004ffd29(void *this,byte param_1)

{
  *(undefined ***)this = std::exception::vftable;
  ___std_exception_destroy((undefined4 *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    FUN_0047ce12(this);
  }
  return this;
}


