// Function: FUN_004a5d90
// Entry: 004a5d90
// Size: 122 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a5d90(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(byte *)(param_1 + 0x155) < 8) {
    uVar2 = (uint)*(byte *)(param_1 + 0x155);
    *(undefined4 *)(param_1 + 0x2ac) = 0x11;
    FUN_00474230(param_1);
    *(undefined1 *)(param_1 + 0x155) = 8;
    uVar1 = FUN_0046b3f0(param_2 + 0x20,uVar2,-uVar2 + 8);
    if (uVar1 != 0) {
      if (uVar2 < 4) {
        FUN_0046b3f0(param_2 + 0x20,uVar2,-uVar2 + 4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0046f190(param_1);
    }
    if (uVar2 < 3) {
      *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 0x1000;
    }
  }
  return;
}


