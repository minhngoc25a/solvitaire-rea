// Function: FUN_004a7610
// Entry: 004a7610
// Size: 65 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a7610(int param_1,undefined4 param_2,uint param_3)

{
  if (((byte)*(uint *)(param_1 + 0x74) & 5) == 5) {
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x18;
    FUN_004a5f90(param_1,param_3);
    if (param_3 != 0) {
      FUN_0046f3d0(param_1,0x527b5c);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0046f190(param_1);
}


