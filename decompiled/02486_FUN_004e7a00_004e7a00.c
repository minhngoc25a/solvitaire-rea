// Function: FUN_004e7a00
// Entry: 004e7a00
// Size: 84 bytes
// Thunk: false
// External: false


bool __cdecl FUN_004e7a00(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (0xe0 < param_2) {
    return true;
  }
  *(uint *)(param_1 + 0x14) = param_2 / 0x2d;
  uVar1 = (uint)(byte)(param_2 + (char)(param_2 / 0x2d) * -0x2d);
  uVar2 = uVar1 / 9;
  *(uint *)(param_1 + 0x10) = uVar2;
  uVar1 = uVar1 % 9;
  *(uint *)(param_1 + 0xc) = uVar1;
  return 4 < uVar1 + uVar2;
}


