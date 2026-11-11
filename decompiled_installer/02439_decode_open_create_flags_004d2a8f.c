// Function: decode_open_create_flags
// Entry: 004d2a8f
// Size: 112 bytes
// Thunk: false
// External: false


/* Library Function - Single Match
    unsigned long __cdecl decode_open_create_flags(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulong __cdecl decode_open_create_flags(int param_1)

{
  uint uVar1;
  __acrt_ptd *p_Var2;
  
  uVar1 = param_1 & 0x700;
  if (uVar1 < 0x401) {
    if ((uVar1 == 0x400) || (uVar1 == 0)) {
      return 3;
    }
    if (uVar1 == 0x100) {
      return 4;
    }
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        return 2;
      }
LAB_004d2ae1:
      p_Var2 = FUN_0042470e();
      *(undefined4 *)p_Var2 = 0x16;
      FUN_004243be();
      return 0xffffffff;
    }
  }
  else {
    if (uVar1 == 0x500) {
      return 1;
    }
    if (uVar1 != 0x600) {
      if (uVar1 == 0x700) {
        return 1;
      }
      goto LAB_004d2ae1;
    }
  }
  return 5;
}


