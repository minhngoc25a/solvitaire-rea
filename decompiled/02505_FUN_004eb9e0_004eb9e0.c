// Function: FUN_004eb9e0
// Entry: 004eb9e0
// Size: 100 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_004eb9e0(uint *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x1000;
  if (0x1000 < *param_1) {
    uVar2 = *param_1;
  }
  uVar2 = uVar2 - 1 | uVar2 - 1 >> 2;
  uVar2 = uVar2 | uVar2 >> 3;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 | uVar2 >> 0x10;
  if (uVar2 == 0xffffffff) {
    *param_2 = '(';
    return 0;
  }
  uVar2 = uVar2 + 1;
  if (4 < uVar2) {
    iVar1 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
      }
    }
    uVar2 = (uVar2 >> ((char)iVar1 - 1U & 0x1f) & 1) + iVar1 * 2;
  }
  *param_2 = (char)uVar2 + -0x18;
  return 0;
}


