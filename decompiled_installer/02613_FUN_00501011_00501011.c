// Function: FUN_00501011
// Entry: 00501011
// Size: 433 bytes
// Thunk: false
// External: false


void __cdecl FUN_00501011(uint *param_1,byte *param_2,uint param_3,uint *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar5;
  uint uVar4;
  byte *pbVar6;
  uint *local_1c;
  byte local_16;
  byte local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0053fbc0 ^ (uint)&stack0xfffffffc;
  local_1c = param_1;
  if (param_4 == (uint *)0x0) {
    param_4 = &DAT_00544b1c;
  }
  if (param_2 == (byte *)0x0) {
    param_3 = 1;
    local_1c = (uint *)0x0;
    pbVar6 = &DAT_005236fc;
  }
  else {
    pbVar6 = param_2;
    if (param_3 == 0) goto LAB_005011b3;
  }
  if (*(short *)((int)param_4 + 6) == 0) {
    bVar5 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (-1 < (char)bVar5) {
      if (local_1c != (uint *)0x0) {
        *local_1c = (uint)bVar5;
      }
      goto LAB_005011b3;
    }
    if ((bVar5 & 0xe0) == 0xc0) {
      uVar4 = (uint)CONCAT11(2,bVar5);
    }
    else if ((bVar5 & 0xf0) == 0xe0) {
      uVar4 = (uint)CONCAT11(3,bVar5);
    }
    else {
      if ((bVar5 & 0xf8) != 0xf0) goto LAB_005011ab;
      uVar4 = (uint)CONCAT11(4,bVar5);
    }
    local_15 = (byte)(uVar4 >> 8);
    puVar3 = (uint *)((1 << (7 - local_15 & 0x1f)) - 1U & uVar4 & 0xff);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),local_15);
LAB_005010fa:
    uVar1 = uVar4 & 0xff;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    uVar2 = (int)pbVar6 - (int)param_2;
    while (uVar2 < param_3) {
      local_16 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      uVar2 = uVar2 + 1;
      uVar4 = CONCAT31((int3)(uVar4 >> 8),local_15);
      if ((local_16 & 0xc0) != 0x80) goto LAB_005011ab;
      puVar3 = (uint *)((int)puVar3 << 6 | local_16 & 0x3f);
    }
    bVar5 = (byte)(uVar4 >> 8);
    if (param_3 < uVar1) {
      *(ushort *)(param_4 + 1) = (ushort)bVar5;
      *param_4 = (uint)puVar3;
      *(ushort *)((int)param_4 + 6) = (ushort)(byte)((char)uVar4 - (char)param_3);
      goto LAB_005011b3;
    }
    if (((puVar3 < (uint *)0xd800) || ((uint *)0xdfff < puVar3)) && (puVar3 < (uint *)0x110000)) {
      local_14 = 0x80;
      local_10 = 0x800;
      local_c = 0x10000;
      if ((&local_1c)[bVar5] <= puVar3) {
        if (local_1c != (uint *)0x0) {
          *local_1c = (uint)puVar3;
        }
        FUN_005011e4(-(uint)(puVar3 != (uint *)0x0) & uVar1,param_4);
        goto LAB_005011b3;
      }
    }
  }
  else {
    bVar5 = (byte)param_4[1];
    local_15 = *(byte *)((int)param_4 + 6);
    uVar4 = (uint)CONCAT11(bVar5,local_15);
    puVar3 = (uint *)*param_4;
    if ((((byte)(bVar5 - 2) < 3) && (local_15 != 0)) && (local_15 < bVar5)) goto LAB_005010fa;
  }
LAB_005011ab:
  FUN_005011c2(param_4,param_5);
LAB_005011b3:
  FUN_004257be(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


