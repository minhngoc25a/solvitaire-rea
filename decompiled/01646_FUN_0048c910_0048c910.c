// Function: FUN_0048c910
// Entry: 0048c910
// Size: 38 bytes
// Thunk: false
// External: false


void __cdecl FUN_0048c910(int param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x210) | 2;
  if (param_2 == '\0') {
    bVar1 = *(byte *)(param_1 + 0x210) & 0xfd;
  }
  *(byte *)(param_1 + 0x210) = bVar1;
  return;
}


