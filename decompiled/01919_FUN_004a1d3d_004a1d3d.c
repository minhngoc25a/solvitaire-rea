// Function: FUN_004a1d3d
// Entry: 004a1d3d
// Size: 394 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a1d3d(byte *param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *local_14;
  byte *local_10;
  byte *local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = 0;
  if (param_3 != 0) {
    pbVar4 = param_1 + 1;
    puVar6 = param_4;
    for (iVar1 = 0x40000; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    uVar5 = param_3 - 1;
    *param_2 = *param_1;
    local_c = param_2 + 1;
    if (uVar5 == 0) {
      iVar1 = 1;
    }
    else {
      local_8 = 0;
      local_10 = param_2 + 3;
      local_4 = 0x10;
      for (; local_14 = pbVar4, 4 < uVar5; uVar5 = uVar5 + iVar1) {
        uVar7 = 0;
        for (; param_1 < pbVar4; param_1 = param_1 + 1) {
          uVar2 = FUN_004a1f7a(param_1);
          param_4[uVar2] = param_1;
        }
        uVar2 = FUN_004a1f7a(pbVar4);
        iVar1 = param_4[uVar2];
        if ((iVar1 == 0) || (uVar5 == 0)) {
LAB_004a1e3c:
          FUN_004a1edc((int)&local_14,0);
          *local_10 = *local_14;
          pbVar4 = local_14 + 1;
          iVar1 = -1;
        }
        else {
          pbVar3 = pbVar4;
          do {
            if (pbVar3[iVar1 - (int)pbVar4] != *pbVar3) break;
            uVar7 = uVar7 + 1;
            pbVar3 = pbVar3 + 1;
          } while (uVar7 < uVar5);
          if (uVar7 < 4) goto LAB_004a1e3c;
          FUN_004a1edc((int)&local_14,1);
          FUN_004a1f26((int)&local_14,uVar7 - 2);
          FUN_004a1f26((int)&local_14,((uint)(pbVar4 + (-1 - iVar1)) >> 8) + 2);
          *local_10 = (byte)(pbVar4 + (-1 - iVar1));
          pbVar4 = local_14 + uVar7;
          iVar1 = -uVar7;
        }
        local_10 = local_10 + 1;
      }
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        FUN_004a1edc((int)&local_14,0);
        *local_10 = *local_14;
        local_10 = local_10 + 1;
        local_14 = local_14 + 1;
      }
      local_8 = local_8 << ((byte)local_4 & 0x1f);
      *local_c = (byte)local_8;
      iVar1 = (int)local_10 - (int)param_2;
      local_c[1] = (byte)((uint)local_8 >> 8);
    }
  }
  return iVar1;
}


