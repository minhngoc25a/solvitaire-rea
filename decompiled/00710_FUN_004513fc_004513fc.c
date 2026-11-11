// Function: FUN_004513fc
// Entry: 004513fc
// Size: 166 bytes
// Thunk: false
// External: false


/* WARNING: Removing unreachable block (ram,0x00451447) */

void __cdecl FUN_004513fc(int *param_1,floating_point_value *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  ulonglong uVar9;
  uint local_8;
  
  uVar6 = 0;
  pbVar5 = (byte *)(param_1 + 2);
  local_8 = 0;
  pbVar3 = (byte *)(param_1[1] + 8 + (int)param_1);
  iVar4 = ((param_2[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x17 + *param_1;
  for (; (pbVar5 != pbVar3 && (uVar9 = FUN_0044f035((int)param_2), CONCAT44(local_8,uVar6) <= uVar9)
         ); local_8 = (local_8 << 4 | uVar2) + (uint)CARRY4(uVar7,(uint)bVar1)) {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    uVar2 = uVar6 >> 0x1c;
    uVar7 = uVar6 * 0x10;
    uVar6 = uVar7 + bVar1;
    iVar4 = iVar4 + -4;
  }
  bVar8 = true;
  while ((pbVar5 != pbVar3 && (bVar8))) {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    bVar8 = bVar1 == 0;
  }
  FUN_0044f0f9(uVar6,local_8,iVar4,SUB41(param_1[0xc2],0),bVar8,param_2);
  return;
}


