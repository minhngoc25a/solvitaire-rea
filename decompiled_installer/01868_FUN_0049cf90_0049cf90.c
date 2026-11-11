// Function: FUN_0049cf90
// Entry: 0049cf90
// Size: 76 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049cf90(int param_1)

{
  uint uVar1;
  
  do {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (0xffffff < (*(uint *)(param_1 + 0xc) + uVar1 ^ uVar1)) {
      if (*(uint *)(param_1 + 0x18) <= *(uint *)(param_1 + 0xc)) {
        return;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x18) - 1 & -uVar1;
    }
    uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 4))(*(int *)(param_1 + 0x1c));
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) << 8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) << 8;
    *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) << 8 | uVar1 & 0xff;
  } while( true );
}


