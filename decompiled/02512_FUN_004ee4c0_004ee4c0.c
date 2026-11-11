// Function: FUN_004ee4c0
// Entry: 004ee4c0
// Size: 223 bytes
// Thunk: false
// External: false


void __cdecl FUN_004ee4c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x46c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x20;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  *(undefined4 *)(param_1 + 0x48) = 4;
  puVar4 = (uint *)(param_1 + 0x60);
  do {
    uVar2 = uVar3 & 1;
    uVar1 = uVar3 >> 1;
    uVar3 = uVar3 + 1;
    uVar1 = -uVar2 & 0xedb88320 ^ uVar1;
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    uVar1 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    *puVar4 = -(uVar1 & 1) & 0xedb88320 ^ uVar1 >> 1;
    puVar4 = puVar4 + 1;
  } while (uVar3 < 0x100);
  return;
}


