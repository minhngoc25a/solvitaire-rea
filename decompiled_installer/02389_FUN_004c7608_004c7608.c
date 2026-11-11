// Function: FUN_004c7608
// Entry: 004c7608
// Size: 173 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004c7608(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_8;
  
  local_8 = 0x1000;
  uVar2 = 0;
  if ((param_1 & 0x300) == 0) {
    local_8 = 0x2000;
  }
  else if ((param_1 & 0x300) != 0x200) {
    local_8 = 0;
  }
  uVar1 = param_1 & 0xc00;
  if (uVar1 != 0) {
    if (uVar1 == 0x400) {
      uVar2 = 0x100;
    }
    else if (uVar1 == 0x800) {
      uVar2 = 0x200;
    }
    else if (uVar1 == 0xc00) {
      uVar2 = 0x300;
    }
  }
  return (param_1 & 4 | (param_1 & 2) << 3) * 2 |
         ((param_1 >> 2 & 8 | param_1 & 0x10) >> 2 | param_1 & 8) >> 1 | (param_1 & 1) << 4 |
         (param_1 & 0x1000) << 2 | local_8 | uVar2;
}


