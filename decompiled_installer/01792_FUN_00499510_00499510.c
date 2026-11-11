// Function: FUN_00499510
// Entry: 00499510
// Size: 174 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00499510(uint param_1,int param_2,void *param_3,size_t param_4,int param_5,int param_6)

{
  uint uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_4 * 3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar5 = 0;
  if (0x1f < uVar1) {
    uVar5 = uVar4;
  }
  uVar4 = uVar4 ^ uVar5;
  if (0x3f < uVar1) {
    uVar5 = uVar4;
  }
  if (param_6 != 0) {
    uVar2 = FUN_004995c0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  if (-1 < param_2) {
    for (; (int)param_4 <= param_5; param_4 = param_4 + 1) {
      if ((param_2 < (int)uVar5) || ((param_2 <= (int)uVar5 && (param_1 < uVar4)))) {
        uVar2 = FUN_004995c0(param_1,param_2,param_3,param_4);
        return uVar2;
      }
      uVar5 = uVar5 << 3 | uVar4 >> 0x1d;
      uVar4 = uVar4 << 3;
    }
  }
  pbVar3 = (byte *)((int)param_3 + param_5);
  for (; 0 < param_5; param_5 = param_5 + -1) {
    pbVar3 = pbVar3 + -1;
    *pbVar3 = (byte)param_1;
    param_1 = param_1 >> 8 | param_2 << 0x18;
    param_2 = param_2 >> 8;
  }
  *pbVar3 = *pbVar3 | 0x80;
  return 0;
}


