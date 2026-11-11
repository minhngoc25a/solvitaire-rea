// Function: FUN_004a5340
// Entry: 004a5340
// Size: 53 bytes
// Thunk: false
// External: false


void __cdecl
FUN_004a5340(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
    *(undefined4 *)(param_2 + 0xc0) = param_3;
    *(undefined4 *)(param_2 + 0xc4) = param_4;
    *(undefined1 *)(param_2 + 200) = param_5;
  }
  return;
}


