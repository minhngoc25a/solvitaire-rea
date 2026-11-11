// Function: FUN_004c76b5
// Entry: 004c76b5
// Size: 176 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004c76b5(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = (ushort)param_1 & 0x8040;
  if (uVar1 == 0x8000) {
    uVar3 = 0xc00;
  }
  else if (uVar1 == 0x40) {
    uVar3 = 0x800;
  }
  else {
    uVar3 = 0x400;
    if (uVar1 != 0x8040) {
      uVar3 = 0;
    }
  }
  uVar2 = param_1 & 0x6000;
  if (uVar2 != 0) {
    if (uVar2 == 0x2000) {
      uVar4 = 0x100;
    }
    else if (uVar2 == 0x4000) {
      uVar4 = 0x200;
    }
    else if (uVar2 == 0x6000) {
      uVar4 = 0x300;
    }
  }
  return (((param_1 & 0x400 | (param_1 >> 2 & 0x400 | param_1 & 0x800) >> 2) >> 2 | param_1 & 0x200)
          >> 3 | param_1 & 0x180) >> 3 | uVar3 | uVar4;
}


