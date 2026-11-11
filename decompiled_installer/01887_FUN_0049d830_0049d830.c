// Function: FUN_0049d830
// Entry: 0049d830
// Size: 251 bytes
// Thunk: false
// External: false


int __cdecl FUN_0049d830(int *param_1,uint param_2)

{
  byte bVar1;
  undefined4 in_EAX;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_2 & 0x1f;
  if ((9 < uVar5) || ((param_2 & 0x7fffffe0) != 0)) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  bVar1 = (&DAT_005190c0)[uVar5];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 3;
  param_1[4] = 0;
  param_1[5] = 2;
  *param_1 = 1 << (bVar1 & 0x1f);
  if (uVar5 < 4) {
    uVar4 = (uint)(byte)(&DAT_005190cc)[uVar5];
    param_1[6] = 1;
    param_1[8] = (uVar5 != 0) + 3;
    iVar2 = (-(uint)(1 < uVar5) & 0x91) + 0x80;
  }
  else {
    param_1[6] = 2;
    param_1[8] = 0x14;
    if (uVar5 == 4) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = 0x40;
      if (uVar5 == 5) {
        iVar2 = 0x20;
      }
    }
    uVar4 = 0;
  }
  param_1[7] = iVar2;
  param_1[9] = uVar4;
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if ((int)param_2 < 0) {
    param_1[6] = 2;
    param_1[8] = 0x14;
    if ((uVar5 != 3) && (uVar5 != 5)) {
      param_1[7] = 0x111;
      param_1[9] = 0x200;
      return (uint)uVar3 << 8;
    }
    param_1[7] = 0xc0;
    param_1[9] = 0;
  }
  return (uint)uVar3 << 8;
}


