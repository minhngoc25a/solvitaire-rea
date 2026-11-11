// Function: FUN_004c73ef
// Entry: 004c73ef
// Size: 252 bytes
// Thunk: false
// External: false


void __cdecl FUN_004c73ef(uint param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_24 [8];
  
  puVar3 = local_24;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar2 = param_1 >> 0x18;
  if (0 < DAT_00544988) {
    MXCSR = MXCSR & 0xffffffc0 |
            -(uint)((uVar2 & 1) != 0) & 0x20 | -(uint)((uVar2 & 2) != 0) & 0x10 |
            -(uint)((uVar2 & 4) != 0) & 8 | -(uint)((uVar2 & 8) != 0) & 4 |
            (uint)((uVar2 & 0x10) != 0) | -(uint)((uVar2 & 0x20) != 0) & 2;
  }
  return;
}


