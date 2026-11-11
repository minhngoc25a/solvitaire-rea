// Function: FUN_004b94e8
// Entry: 004b94e8
// Size: 97 bytes
// Thunk: false
// External: false


void FUN_004b94e8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (int)param_2 >> 0x18 & 0xff;
  *(uint *)(param_1 + 0xfc) = uVar2;
  *(uint *)(param_1 + 0x100) = 0xff - uVar2;
  uVar4 = param_2 & 0xff;
  uVar3 = (int)param_2 >> 8 & 0xff;
  uVar1 = (int)param_2 >> 0x10 & 0xff;
  if (*(int *)(param_1 + 0xdc) != 0) {
    uVar1 = uVar1 * uVar2;
    uVar3 = uVar3 * uVar2;
    uVar4 = uVar4 * uVar2;
  }
  *(uint *)(param_1 + 0xf0) = uVar4;
  *(uint *)(param_1 + 0xf4) = uVar3;
  *(uint *)(param_1 + 0xf8) = uVar1;
  return;
}


