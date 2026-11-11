// Function: FUN_004c7765
// Entry: 004c7765
// Size: 182 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004c7765(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1 >> 2;
  uVar4 = 0;
  if ((param_1 & 0x3000) == 0) {
    uVar2 = 0x300;
  }
  else {
    uVar2 = uVar4;
    if ((param_1 & 0x3000) == 0x1000) {
      uVar2 = 0x200;
    }
  }
  uVar1 = (param_1 & 0xc00000) >> 0xe;
  if (uVar1 != 0) {
    if (uVar1 == 0x100) {
      uVar4 = 0x400;
    }
    else if (uVar1 == 0x200) {
      uVar4 = 0x800;
    }
    else if (uVar1 == 0x300) {
      uVar4 = 0xc00;
    }
  }
  return ((uVar3 & 0x10000) >> 0xe | (((uVar3 & 0x4000) >> 0xe) << 2 | (uVar3 & 0x8000) >> 0xe) << 2
         ) * 2 | (uVar3 & 0xc0000) >> 0x12 | (uVar3 & 0x20000) >> 0xf | param_1 >> 2 & 0x1000 |
         uVar2 | uVar4;
}


