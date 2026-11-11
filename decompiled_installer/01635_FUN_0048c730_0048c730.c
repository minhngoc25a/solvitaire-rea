// Function: FUN_0048c730
// Entry: 0048c730
// Size: 40 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048c730(int param_1,ushort param_2)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(ushort *)(param_1 + 0x2e4) =
       (*(ushort *)(param_1 + 0x2e4) ^ param_2) & 0xfff ^ *(ushort *)(param_1 + 0x2e4);
  return;
}


