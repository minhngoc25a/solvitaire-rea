// Function: FUN_00479b4b
// Entry: 00479b4b
// Size: 246 bytes
// Thunk: false
// External: false


uint FUN_00479b4b(byte *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != (byte *)0x0) {
    uVar2 = ~param_3;
    if (7 < param_2) {
      uVar3 = param_2 >> 3;
      do {
        param_2 = param_2 - 8;
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((*param_1 ^ uVar2) & 0xff) * 4);
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((param_1[1] ^ uVar2) & 0xff) * 4);
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((param_1[2] ^ uVar2) & 0xff) * 4);
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((param_1[3] ^ uVar2) & 0xff) * 4);
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((param_1[4] ^ uVar2) & 0xff) * 4);
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((param_1[5] ^ uVar2) & 0xff) * 4);
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((param_1[6] ^ uVar2) & 0xff) * 4);
        pbVar1 = param_1 + 7;
        param_1 = param_1 + 8;
        uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((*pbVar1 ^ uVar2) & 0xff) * 4);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
      uVar2 = uVar2 >> 8 ^ *(uint *)(&DAT_0051a138 + ((*param_1 ^ uVar2) & 0xff) * 4);
      param_1 = param_1 + 1;
    }
    param_3 = ~uVar2;
  }
  return param_3;
}


