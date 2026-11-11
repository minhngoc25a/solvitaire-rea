// Function: FUN_004c781b
// Entry: 004c781b
// Size: 182 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004c781b(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_1 >> 2;
  uVar2 = param_1 & 0xc00;
  uVar3 = (param_1 & 0xc03fffff) >> 0x16;
  uVar4 = 0;
  if (uVar2 == 0x400) {
    uVar2 = 0x8040;
  }
  else if (uVar2 == 0x800) {
    uVar2 = 0x40;
  }
  else if (uVar2 == 0xc00) {
    uVar2 = 0x8000;
  }
  else {
    uVar2 = 0;
  }
  if (uVar3 != 0) {
    if (uVar3 == 0x100) {
      uVar4 = 0x2000;
    }
    else if (uVar3 == 0x200) {
      uVar4 = 0x4000;
    }
    else if (uVar3 == 0x300) {
      uVar4 = 0x6000;
    }
  }
  return ((((uVar1 & 0x1000000) >> 0x16 |
           (((uVar1 & 0x400000) >> 0x16) << 2 | (uVar1 & 0x800000) >> 0x16) << 2) << 2 |
          (uVar1 & 0x2000000) >> 0x16) << 3 | (uVar1 & 0xc000000) >> 0x16) << 3 | uVar2 | uVar4;
}


