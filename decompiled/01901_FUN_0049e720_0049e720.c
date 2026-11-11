// Function: FUN_0049e720
// Entry: 0049e720
// Size: 165 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049e720(uint *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = *param_1;
  uVar8 = param_3 | 0x100;
  do {
    uVar3 = *(ushort *)(param_2 + (uVar8 >> 8) * 2);
    uVar4 = uVar8 * 2;
    uVar7 = uVar8 >> 7 & 1;
    uVar5 = -uVar7;
    uVar9 = (uVar10 >> 0xb) * (uint)uVar3;
    uVar6 = uVar5 & uVar9;
    puVar1 = param_1 + 2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + uVar6;
    param_1[3] = param_1[3] + (uint)CARRY4(uVar2,uVar6);
    uVar7 = uVar7 - 1;
    uVar10 = ((uVar10 & uVar5) - uVar6) + (uVar7 & uVar9);
    *(ushort *)(param_2 + (uVar8 >> 8) * 2) =
         (short)((int)(((uVar7 & 0x7e1) - (uint)uVar3) + 0x1f) >> 5) + uVar3;
    if (uVar10 < 0x1000000) {
      uVar10 = uVar10 * 0x100;
      FUN_0049e680((int)param_1);
    }
    uVar8 = uVar4;
  } while (uVar4 < 0x10000);
  *param_1 = uVar10;
  return;
}


