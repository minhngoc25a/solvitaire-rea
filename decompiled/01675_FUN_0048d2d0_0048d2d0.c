// Function: FUN_0048d2d0
// Entry: 0048d2d0
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048d2d0(int param_1,int param_2)

{
  if (param_2 == 2) {
    if ((*(uint *)(param_1 + 0x18) & 0x40) == 0) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff7f | 0x40;
      FUN_00491490(param_1);
    }
  }
  else if (param_2 == 4) {
    if (-1 < (char)*(uint *)(param_1 + 0x18)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffffbf | 0x80;
      FUN_00491490(param_1);
      return;
    }
  }
  return;
}


