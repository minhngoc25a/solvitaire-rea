// Function: thunk_FUN_0048b320
// Entry: 0048b310
// Size: 5 bytes
// Thunk: true
// External: false


uint __cdecl thunk_FUN_0048b320(uint param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar3 = ~param_1;
  if (0x16 < param_3) {
    do {
      if (((uint)param_2 & 3) == 0) break;
      uVar6 = *param_2;
      param_2 = (uint *)((int)param_2 + 1);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (((byte)uVar6 ^ uVar3) & 0xff) * 4);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    uVar4 = param_3 / 0x14;
    uVar6 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    param_3 = param_3 % 0x14;
    uStack_14 = 0;
    iVar5 = uVar4 - 1;
    if (iVar5 != 0) {
      uVar6 = 0;
      do {
        uVar3 = *param_2 ^ uVar3;
        uVar6 = param_2[1] ^ uVar6;
        uStack_1c = param_2[2] ^ uStack_1c;
        uStack_18 = param_2[3] ^ uStack_18;
        puVar1 = param_2 + 4;
        param_2 = param_2 + 5;
        uStack_14 = *puVar1 ^ uStack_14;
        uVar3 = *(uint *)(&DAT_005101f8 + (uVar3 & 0xff) * 4) ^
                *(uint *)(&DAT_005109f8 + (uVar3 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_005105f8 + (uVar3 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00510df8 + (uVar3 >> 0x18) * 4);
        uVar6 = *(uint *)(&DAT_005101f8 + (uVar6 & 0xff) * 4) ^
                *(uint *)(&DAT_005109f8 + (uVar6 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_005105f8 + (uVar6 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_00510df8 + (uVar6 >> 0x18) * 4);
        uStack_1c = *(uint *)(&DAT_005101f8 + (uStack_1c & 0xff) * 4) ^
                    *(uint *)(&DAT_005109f8 + (uStack_1c >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_005105f8 + (uStack_1c >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_00510df8 + (uStack_1c >> 0x18) * 4);
        uStack_18 = *(uint *)(&DAT_005101f8 + (uStack_18 & 0xff) * 4) ^
                    *(uint *)(&DAT_005109f8 + (uStack_18 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_005105f8 + (uStack_18 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_00510df8 + (uStack_18 >> 0x18) * 4);
        uStack_14 = *(uint *)(&DAT_005101f8 + (uStack_14 & 0xff) * 4) ^
                    *(uint *)(&DAT_005109f8 + (uStack_14 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_005105f8 + (uStack_14 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_00510df8 + (uStack_14 >> 0x18) * 4);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar3 = (*param_2 ^ uVar3) >> 8 ^ *(uint *)(&DAT_0050f9f8 + ((*param_2 ^ uVar3) & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar6 = param_2[1] ^ uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4) ^ uVar6;
    uVar3 = uVar6 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar6 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uStack_1c = param_2[2] ^ uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4) ^ uStack_1c;
    uVar3 = uStack_1c >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uStack_1c & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uStack_18 = param_2[3] ^ uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4) ^ uStack_18;
    uVar3 = uStack_18 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uStack_18 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uStack_14 = param_2[4] ^ uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4) ^ uStack_14;
    uVar3 = uStack_14 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uStack_14 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (uVar3 & 0xff) * 4);
    param_2 = param_2 + 5;
  }
  if (7 < param_3) {
    uVar6 = param_3 >> 3;
    do {
      param_3 = param_3 - 8;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (((byte)*param_2 ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0050f9f8 + ((*(byte *)((int)param_2 + 1) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0050f9f8 + ((*(byte *)((int)param_2 + 2) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0050f9f8 + ((*(byte *)((int)param_2 + 3) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (((byte)param_2[1] ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0050f9f8 + ((*(byte *)((int)param_2 + 5) ^ uVar3) & 0xff) * 4);
      uVar3 = uVar3 >> 8 ^
              *(uint *)(&DAT_0050f9f8 + ((*(byte *)((int)param_2 + 6) ^ uVar3) & 0xff) * 4);
      pbVar2 = (byte *)((int)param_2 + 7);
      param_2 = param_2 + 2;
      uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + ((*pbVar2 ^ uVar3) & 0xff) * 4);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  for (; param_3 != 0; param_3 = param_3 - 1) {
    uVar6 = *param_2;
    param_2 = (uint *)((int)param_2 + 1);
    uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_0050f9f8 + (((byte)uVar6 ^ uVar3) & 0xff) * 4);
  }
  return ~uVar3;
}


