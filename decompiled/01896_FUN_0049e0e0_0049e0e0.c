// Function: FUN_0049e0e0
// Entry: 0049e0e0
// Size: 267 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049e0e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((int)uVar3 < 0) {
    uVar3 = 5;
  }
  uVar1 = param_1[1];
  *param_1 = uVar3;
  if (uVar1 == 0) {
    if (uVar3 < 4) {
      uVar1 = 1 << ((char)uVar3 * '\x02' + 0x10U & 0x1f);
    }
    else if (uVar3 < 7) {
      uVar1 = 1 << ((char)uVar3 + 0x13U & 0x1f);
    }
    else {
      uVar1 = (-(uint)(7 < uVar3) & 0x2000000) + 0x2000000;
    }
    param_1[1] = uVar1;
  }
  uVar2 = param_1[0xc];
  if ((param_1[0xd] == 0) && (uVar2 < uVar1)) {
    if (uVar2 < 0x1000) {
      uVar2 = 0x1000;
    }
    if (uVar2 < uVar1) {
      param_1[1] = uVar2;
    }
  }
  if ((int)param_1[2] < 0) {
    param_1[2] = 3;
  }
  if ((int)param_1[3] < 0) {
    param_1[3] = 0;
  }
  if ((int)param_1[4] < 0) {
    param_1[4] = 2;
  }
  uVar1 = param_1[5];
  if ((int)uVar1 < 0) {
    uVar1 = (uint)(4 < uVar3);
    param_1[5] = uVar1;
  }
  uVar2 = param_1[6];
  if ((int)uVar2 < 0) {
    uVar2 = (-(uint)(uVar3 < 7) & 0xffffffe0) + 0x40;
    param_1[6] = uVar2;
  }
  uVar3 = param_1[7];
  if ((int)uVar3 < 0) {
    uVar3 = (uint)(uVar1 != 0);
    param_1[7] = uVar3;
  }
  if ((int)param_1[8] < 0) {
    param_1[8] = 5 - (uVar3 != 0);
  }
  if (param_1[9] == 0) {
    param_1[9] = (uVar2 >> 1) + 0x10 >> (uVar3 == 0);
  }
  if ((int)param_1[0xb] < 0) {
    param_1[0xb] = 1;
  }
  return;
}


