// Function: FUN_004bef1f
// Entry: 004bef1f
// Size: 1034 bytes
// Thunk: false
// External: false


void __cdecl FUN_004bef1f(int *param_1,int param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *extraout_EDX;
  byte *pbVar11;
  int iVar12;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_18;
  
  local_2c = param_1[0xf];
  iVar3 = param_1[2];
  local_18 = param_1[0xc];
  local_28 = param_1[0xe];
  local_30 = param_1[0xd];
  iVar4 = param_1[8];
  iVar8 = iVar3 * param_3;
  iVar5 = iVar8 + iVar3;
  if ((uint)param_1[1] <= param_3 + 1U) {
    iVar5 = iVar8;
  }
  param_3 = 0;
  if (0 < iVar3) {
    pbVar11 = (byte *)(*param_1 + 1 + iVar8 * 4);
    local_24 = (byte *)(iVar5 * 4 + -2 + *param_1);
    do {
      FUN_004bf329((uint)pbVar11[-1] - local_18);
      FUN_004bf329((uint)*pbVar11 - local_30);
      FUN_004bf329((uint)pbVar11[1] - local_28);
      iVar5 = FUN_004bf329((uint)pbVar11[2] - local_2c);
      uVar6 = FUN_004fea6a(iVar4,iVar5);
      iVar5 = param_3 + 1;
      *(char *)(param_3 + param_2) = (char)uVar6;
      bVar2 = *(byte *)(param_4 + 3 + uVar6 * 4);
      uVar10 = (uint)bVar2;
      if (bVar2 <= pbVar11[2]) {
        uVar10 = (uint)pbVar11[2];
      }
      iVar12 = 0xff - (int)((0xff - uVar10) * (0xff - uVar10)) / 0xff;
      iVar8 = (int)(((uint)*(byte *)(param_4 + uVar6 * 4) - (uint)pbVar11[-1]) * iVar12) / 0xff;
      iVar7 = (int)(((uint)*(byte *)(param_4 + 1 + uVar6 * 4) - (uint)*pbVar11) * iVar12) / 0xff;
      local_18 = local_18 + iVar8;
      iVar12 = (int)(((uint)*(byte *)(param_4 + 2 + uVar6 * 4) - (uint)pbVar11[1]) * iVar12) / 0xff;
      iVar9 = (uint)bVar2 - (uint)pbVar11[2];
      local_28 = local_28 + iVar12;
      local_2c = local_2c + iVar9;
      local_30 = local_30 + iVar7;
      while( true ) {
        uVar10 = local_28 * local_28 + local_18 * local_18 + local_30 * local_30 +
                 local_2c * local_2c;
        if ((((local_18 * local_18 < 0x65) && (local_30 * local_30 < 0x65)) &&
            (local_28 * local_28 < 0x65)) &&
           (((local_2c * local_2c < 0x65 &&
             (uVar10 <= (uint)((iVar9 * iVar9 + iVar12 * iVar12 + iVar7 * iVar7 + iVar8 * iVar8) * 2
                              ))) && (uVar10 < 0xc9)))) break;
        local_18 = local_18 / 2;
        local_30 = local_30 / 2;
        local_28 = local_28 / 2;
        local_2c = local_2c / 2;
      }
      if (param_3 != 0) {
        iVar8 = FUN_004bf329((uint)local_24[1] -
                             ((int)(local_2c * 3 + (local_2c * 3 >> 0x1f & 0xfU)) >> 4));
        local_24[1] = (byte)iVar8;
        iVar8 = FUN_004bf329((uint)*local_24 -
                             ((int)(local_28 * 3 + (local_28 * 3 >> 0x1f & 0xfU)) >> 4));
        bVar2 = local_24[-1];
        *extraout_EDX = (char)iVar8;
        iVar8 = FUN_004bf329((uint)bVar2 -
                             ((int)(local_30 * 3 + (local_30 * 3 >> 0x1f & 0xfU)) >> 4));
        local_24[-1] = (byte)iVar8;
        iVar8 = FUN_004bf329((uint)local_24[-2] -
                             ((int)(local_18 * 3 + (local_18 * 3 >> 0x1f & 0xfU)) >> 4));
        local_24[-2] = (byte)iVar8;
      }
      if (iVar5 < iVar3) {
        iVar8 = FUN_004bf329((uint)local_24[9] - ((int)(local_2c + (local_2c >> 0x1f & 0xfU)) >> 4))
        ;
        local_24[9] = (byte)iVar8;
        iVar8 = FUN_004bf329((uint)local_24[8] - ((int)(local_28 + (local_28 >> 0x1f & 0xfU)) >> 4))
        ;
        local_24[8] = (byte)iVar8;
        iVar8 = FUN_004bf329((uint)local_24[7] - ((int)(local_30 + (local_30 >> 0x1f & 0xfU)) >> 4))
        ;
        local_24[7] = (byte)iVar8;
        iVar8 = FUN_004bf329((uint)local_24[6] - ((int)(local_18 + (local_18 >> 0x1f & 0xfU)) >> 4))
        ;
        local_24[6] = (byte)iVar8;
      }
      iVar8 = FUN_004bf329((uint)local_24[5] -
                           ((int)(local_2c * 5 + (local_2c * 5 >> 0x1f & 0xfU)) >> 4));
      local_24[5] = (byte)iVar8;
      pbVar1 = local_24 + 4;
      iVar8 = FUN_004bf329((uint)*pbVar1 -
                           ((int)(local_28 * 5 + (local_28 * 5 >> 0x1f & 0xfU)) >> 4));
      *pbVar1 = (byte)iVar8;
      iVar8 = FUN_004bf329((uint)local_24[3] -
                           ((int)(local_30 * 5 + (local_30 * 5 >> 0x1f & 0xfU)) >> 4));
      local_24[3] = (byte)iVar8;
      iVar8 = FUN_004bf329((uint)local_24[2] -
                           ((int)(local_18 * 5 + (local_18 * 5 >> 0x1f & 0xfU)) >> 4));
      local_24[2] = (byte)iVar8;
      pbVar11 = pbVar11 + 4;
      param_3 = iVar5;
      local_24 = pbVar1;
    } while (iVar5 < iVar3);
  }
  param_1[0xc] = (int)(local_18 * 7 + (local_18 * 7 >> 0x1f & 0xfU)) >> 4;
  param_1[0xd] = (int)(local_30 * 7 + (local_30 * 7 >> 0x1f & 0xfU)) >> 4;
  param_1[0xe] = (int)(local_28 * 7 + (local_28 * 7 >> 0x1f & 0xfU)) >> 4;
  param_1[0xf] = (int)(local_2c * 7 + (local_2c * 7 >> 0x1f & 0xfU)) >> 4;
  return;
}


