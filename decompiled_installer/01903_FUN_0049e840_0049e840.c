// Function: FUN_0049e840
// Entry: 0049e840
// Size: 598 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049e840(ushort *param_1,uint *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar2 = *param_1;
  uVar3 = (uint)uVar2;
  puVar1 = param_2 + 2;
  uVar8 = (*param_2 >> 0xb) * uVar3;
  if (7 < param_3) {
    uVar9 = *param_2 - uVar8;
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + uVar8;
    param_2[3] = param_2[3] + (uint)CARRY4(uVar3,uVar8);
    *param_1 = uVar2 - (uVar2 >> 5);
    if (uVar9 < 0x1000000) {
      uVar9 = uVar9 * 0x100;
      FUN_0049e680((int)param_2);
    }
    uVar2 = param_1[8];
    uVar3 = (uint)uVar2;
    uVar8 = (uVar9 >> 0xb) * uVar3;
    if (0xf < param_3) {
      uVar9 = uVar9 - uVar8;
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + uVar8;
      param_2[3] = param_2[3] + (uint)CARRY4(uVar3,uVar8);
      param_1[8] = uVar2 - (uVar2 >> 5);
      if (uVar9 < 0x1000000) {
        uVar9 = uVar9 * 0x100;
        FUN_0049e680((int)param_2);
      }
      *param_2 = uVar9;
      FUN_0049e720(param_2,(int)(param_1 + 0x100),param_3 - 0x10);
      return;
    }
    param_3 = param_3 - 8;
    param_1 = param_1 + 8;
  }
  *param_1 = (short)(0x800 - uVar3 >> 5) + (short)uVar3;
  if (uVar8 < 0x1000000) {
    uVar8 = uVar8 << 8;
    FUN_0049e680((int)param_2);
  }
  uVar5 = param_3 >> 2;
  uVar2 = param_1[param_4 * 0x10 + 1];
  uVar6 = (uVar8 >> 0xb) * (uint)uVar2;
  uVar9 = -uVar5 & uVar6;
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uVar9;
  param_2[3] = param_2[3] + (uint)CARRY4(uVar3,uVar9);
  uVar3 = ((uVar8 & -uVar5) - uVar9) + (uVar5 - 1 & uVar6);
  param_1[param_4 * 0x10 + 1] =
       (short)((int)(((uVar5 - 1 & 0x7e1) - (uint)uVar2) + 0x1f) >> 5) + uVar2;
  if (uVar3 < 0x1000000) {
    uVar3 = uVar3 * 0x100;
    FUN_0049e680((int)param_2);
  }
  uVar6 = param_3 >> 1 & 1;
  uVar2 = param_1[param_4 * 0x10 + uVar5 + 2];
  uVar7 = (uVar3 >> 0xb) * (uint)uVar2;
  uVar9 = -uVar6 & uVar7;
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + uVar9;
  param_2[3] = param_2[3] + (uint)CARRY4(uVar8,uVar9);
  uVar3 = ((uVar3 & -uVar6) - uVar9) + (uVar6 - 1 & uVar7);
  param_1[param_4 * 0x10 + uVar5 + 2] =
       (short)((int)(((uVar6 - 1 & 0x7e1) - (uint)uVar2) + 0x1f) >> 5) + uVar2;
  if (uVar3 < 0x1000000) {
    uVar3 = uVar3 * 0x100;
    FUN_0049e680((int)param_2);
  }
  iVar4 = uVar6 + uVar5 * 2 + 4;
  uVar2 = param_1[param_4 * 0x10 + iVar4];
  uVar6 = (uVar3 >> 0xb) * (uint)uVar2;
  uVar9 = -(param_3 & 1);
  uVar5 = uVar9 & uVar6;
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + uVar5;
  param_2[3] = param_2[3] + (uint)CARRY4(uVar8,uVar5);
  uVar8 = (param_3 & 1) - 1;
  uVar3 = ((uVar3 & uVar9) - uVar5) + (uVar8 & uVar6);
  param_1[param_4 * 0x10 + iVar4] =
       (short)((int)(((uVar8 & 0x7e1) - (uint)uVar2) + 0x1f) >> 5) + uVar2;
  if (uVar3 < 0x1000000) {
    uVar3 = uVar3 * 0x100;
    FUN_0049e680((int)param_2);
  }
  *param_2 = uVar3;
  return;
}


