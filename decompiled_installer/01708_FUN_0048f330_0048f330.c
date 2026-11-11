// Function: FUN_0048f330
// Entry: 0048f330
// Size: 123 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048f330(undefined1 *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 < 0x10000) {
    if (1 < param_2) {
      param_1[1] = (char)param_3;
      *param_1 = (char)(param_3 >> 8);
      return 2;
    }
  }
  else if (3 < param_2) {
    uVar1 = (param_3 - 0x10000 >> 10 & 0x3ff) - 0x2800 & 0xffff;
    param_1[1] = (char)uVar1;
    uVar2 = (param_3 - 0x10000 & 0x3ff) - 0x2400 & 0xffff;
    *param_1 = (char)(uVar1 >> 8);
    param_1[2] = (char)(uVar2 >> 8);
    param_1[3] = (char)uVar2;
    return 4;
  }
  return 0;
}


