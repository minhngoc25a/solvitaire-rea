// Function: FUN_004ea910
// Entry: 004ea910
// Size: 70 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004ea910(int param_1,char *param_2)

{
  uint uVar1;
  uint in_EAX;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((((uVar1 < 5) && (in_EAX = *(uint *)(param_1 + 0x10), in_EAX < 5)) &&
      (in_EAX = in_EAX + uVar1, in_EAX < 5)) && (*(uint *)(param_1 + 0x14) < 5)) {
    *param_2 = (*(char *)(param_1 + 0x14) * '\x05' + *(char *)(param_1 + 0x10)) * '\t' + (char)uVar1
    ;
    return (uint)param_2 & 0xffffff00;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


