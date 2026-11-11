// Function: FUN_004ec0a0
// Entry: 004ec0a0
// Size: 137 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004ec0a0(undefined1 *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (4 < param_3) {
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 < 0x1000) {
      uVar2 = 0x1000;
    }
    *(uint *)(param_1 + 4) = uVar2;
    bVar1 = *param_2;
    if (bVar1 < 0xe1) {
      *param_1 = (char)((ulonglong)(uint)bVar1 % 9);
      uVar2 = bVar1 / 9;
      param_1[2] = (char)(uVar2 / 5);
      param_1[1] = (char)((ulonglong)uVar2 % 5);
      return 0;
    }
  }
  return 4;
}


