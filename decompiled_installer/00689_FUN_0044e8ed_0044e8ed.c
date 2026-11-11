// Function: FUN_0044e8ed
// Entry: 0044e8ed
// Size: 57 bytes
// Thunk: false
// External: false


void __cdecl FUN_0044e8ed(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  do {
    uVar1 = (uint)*param_1;
    param_1 = param_1 + 1;
    if (uVar1 - 0x41 < 0x1a) {
      uVar1 = uVar1 + 0x20;
    }
    uVar2 = (uint)*param_2;
    param_2 = param_2 + 1;
    if (uVar2 - 0x41 < 0x1a) {
      uVar2 = uVar2 + 0x20;
    }
  } while ((uVar1 == uVar2) && (uVar1 != 0));
  return;
}


