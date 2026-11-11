// Function: FUN_0046b3f0
// Entry: 0046b3f0
// Size: 181 bytes
// Thunk: false
// External: false


uint __cdecl FUN_0046b3f0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  bool bVar5;
  byte local_8 [8];
  
  local_8[0] = 0x89;
  local_8[1] = 0x50;
  local_8[2] = 0x4e;
  local_8[3] = 0x47;
  local_8[4] = 0xd;
  local_8[5] = 10;
  local_8[6] = 0x1a;
  local_8[7] = 10;
  if (param_3 < 9) {
    if (param_3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    param_3 = 8;
  }
  if (7 < param_2) {
    return 0xffffffff;
  }
  uVar4 = 8 - param_2;
  if (param_2 + param_3 < 9) {
    uVar4 = param_3;
  }
  pbVar3 = local_8 + param_2;
  pbVar2 = (byte *)(param_1 + param_2);
  while (uVar1 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)pbVar2 != *(int *)pbVar3) goto LAB_0046b45d;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
    uVar4 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_0046b45d:
    bVar5 = *pbVar2 < *pbVar3;
    if ((*pbVar2 != *pbVar3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar5 = pbVar2[1] < pbVar3[1], pbVar2[1] != pbVar3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar5 = pbVar2[2] < pbVar3[2], pbVar2[2] != pbVar3[2] ||
           ((uVar1 != 0xffffffff && (bVar5 = pbVar2[3] < pbVar3[3], pbVar2[3] != pbVar3[3]))))))))))
       )) {
      return -(uint)bVar5 | 1;
    }
  }
  return 0;
}


