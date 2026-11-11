// Function: FUN_0048f180
// Entry: 0048f180
// Size: 208 bytes
// Thunk: false
// External: false


byte * __cdecl FUN_0048f180(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xfffd;
  if (param_3 < 0x110000) {
    uVar2 = param_3;
  }
  bVar1 = (byte)uVar2;
  if (uVar2 < 0x80) {
    if (param_2 != 0) {
      *param_1 = bVar1;
      return (byte *)0x1;
    }
  }
  else if (uVar2 < 0x800) {
    if (1 < param_2) {
      *param_1 = (byte)(uVar2 >> 6) & 0x1f | 0xc0;
      param_1[1] = bVar1 & 0x3f | 0x80;
      return param_1 + 1 + (1 - (int)param_1);
    }
  }
  else if (uVar2 < 0x10000) {
    if (2 < param_2) {
      *param_1 = (byte)(uVar2 >> 0xc) & 0xf | 0xe0;
      param_1[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
      param_1[2] = bVar1 & 0x3f | 0x80;
      return param_1 + 2 + (1 - (int)param_1);
    }
  }
  else if (3 < param_2) {
    *param_1 = (byte)(uVar2 >> 0x12) & 7 | 0xf0;
    param_1[1] = (byte)(uVar2 >> 0xc) & 0x3f | 0x80;
    param_1[2] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
    param_1[3] = bVar1 & 0x3f | 0x80;
    return param_1 + 3 + (1 - (int)param_1);
  }
  return (byte *)0x0;
}


