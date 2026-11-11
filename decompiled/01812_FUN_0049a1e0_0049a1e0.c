// Function: FUN_0049a1e0
// Entry: 0049a1e0
// Size: 334 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049a1e0(byte *param_1)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  bVar1 = *param_1;
  do {
    if (bVar1 == 0) {
      return 1;
    }
    if ((((bVar1 == 9) || (bVar1 = *param_1, bVar1 == 10)) || (bVar1 == 0xd)) ||
       ((0x1f < bVar1 && (bVar1 < 0x7f)))) {
      param_1 = param_1 + 1;
    }
    else if (((byte)(bVar1 + 0x3e) < 0x1e) && ((byte)(param_1[1] + 0x80) < 0x40)) {
      param_1 = param_1 + 2;
    }
    else {
      if (bVar1 == 0xe0) {
        if ((0x1f < (byte)(param_1[1] + 0x60)) || (param_1[2] < 0x80)) goto LAB_0049a266;
        if (0xbf < param_1[2]) goto LAB_0049a25a;
      }
      else {
LAB_0049a25a:
        if ((bVar1 < 0xe1) || (0xec < bVar1)) {
LAB_0049a266:
          if ((bVar1 == 0xee) || (bVar1 == 0xef)) goto LAB_0049a272;
        }
        else {
LAB_0049a272:
          if ((((0x7f < param_1[1]) && (param_1[1] < 0xc0)) && (0x7f < param_1[2])) &&
             (param_1[2] < 0xc0)) goto LAB_0049a2ad;
        }
        if (bVar1 != 0xed) {
          if (bVar1 == 0xf0) {
            bVar2 = (byte)(param_1[1] + 0x70) < 0x2f;
            bVar3 = (byte)(param_1[1] + 0x70) == 0x2f;
LAB_0049a2fb:
            if (!bVar2 && !bVar3) {
              return 0;
            }
            if (0x3f < (byte)(param_1[2] + 0x80)) {
              return 0;
            }
            if (0x3f < (byte)(param_1[3] + 0x80)) {
              return 0;
            }
          }
          else if (((2 < (byte)(bVar1 + 0xf)) || (0x3f < (byte)(param_1[1] + 0x80))) ||
                  ((0x3f < (byte)(param_1[2] + 0x80) || ((param_1[3] < 0x80 || (0xbf < param_1[3])))
                   ))) {
            if (bVar1 != 0xf4) {
              return 0;
            }
            bVar2 = (byte)(param_1[1] + 0x80) < 0xf;
            bVar3 = (byte)(param_1[1] + 0x80) == 0xf;
            goto LAB_0049a2fb;
          }
          param_1 = param_1 + 4;
          goto LAB_0049a319;
        }
        if (0x1f < (byte)(param_1[1] + 0x80)) {
          return 0;
        }
        if (0x3f < (byte)(param_1[2] + 0x80)) {
          return 0;
        }
      }
LAB_0049a2ad:
      param_1 = param_1 + 3;
    }
LAB_0049a319:
    bVar1 = *param_1;
  } while( true );
}


