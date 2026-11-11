// Function: FUN_004a5090
// Entry: 004a5090
// Size: 53 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004a5090(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
    *(undefined4 *)(param_2 + 0xb4) = param_3;
    *(undefined4 *)(param_2 + 0xb8) = param_4;
    *(undefined1 *)(param_2 + 0xbc) = param_5;
  }
  return;
}


