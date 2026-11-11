// Function: FUN_004a0370
// Entry: 004a0370
// Size: 401 bytes
// Thunk: false
// External: false


void __cdecl FUN_004a0370(int param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = (uint *)(param_1 + 0x58);
  iVar4 = *(int *)(param_1 + 0x2c) * 0x10 + param_2;
  uVar3 = *(ushort *)(param_1 + 0x1c98 + iVar4 * 2);
  uVar6 = (*(uint *)(param_1 + 0x58) >> 0xb) * (uint)uVar3;
  uVar5 = *(uint *)(param_1 + 0x58) - uVar6;
  puVar2 = (uint *)(param_1 + 0x60);
  uVar7 = *puVar2;
  *puVar2 = *puVar2 + uVar6;
  *(uint *)(param_1 + 100) = *(int *)(param_1 + 100) + (uint)CARRY4(uVar7,uVar6);
  *(ushort *)(param_1 + iVar4 * 2 + 0x1c98) = uVar3 - (uVar3 >> 5);
  if (uVar5 < 0x1000000) {
    uVar5 = uVar5 * 0x100;
    FUN_0049e680((int)puVar1);
  }
  uVar3 = *(ushort *)(param_1 + 0x1c38 + *(int *)(param_1 + 0x2c) * 2);
  uVar7 = (uVar5 >> 0xb) * (uint)uVar3;
  *(ushort *)(param_1 + *(int *)(param_1 + 0x2c) * 2 + 0x1c38) = (short)(0x800 - uVar3 >> 5) + uVar3
  ;
  if (uVar7 < 0x1000000) {
    uVar7 = uVar7 * 0x100;
    FUN_0049e680((int)puVar1);
  }
  *puVar1 = uVar7;
  *(uint *)(param_1 + 0x2c) = (uint)(byte)(&DAT_005190dc)[*(int *)(param_1 + 0x2c)];
  FUN_0049e840((ushort *)(param_1 + 0x2298),puVar1,0,param_2);
  uVar5 = *puVar1;
  uVar7 = 1;
  do {
    iVar4 = uVar7 * 2;
    uVar3 = *(ushort *)(iVar4 + 0x1f98 + param_1);
    uVar6 = (uVar5 >> 0xb) * (uint)uVar3;
    uVar5 = uVar5 - uVar6;
    puVar2 = (uint *)(param_1 + 0x60);
    uVar7 = *puVar2;
    *puVar2 = *puVar2 + uVar6;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (uint)CARRY4(uVar7,uVar6);
    *(ushort *)(iVar4 + 0x1f98 + param_1) = uVar3 - (uVar3 >> 5);
    if (uVar5 < 0x1000000) {
      uVar5 = uVar5 * 0x100;
      FUN_0049e680((int)puVar1);
    }
    uVar7 = iVar4 + 1;
  } while (uVar7 < 0x40);
  iVar4 = 0x1a;
  do {
    uVar5 = uVar5 >> 1;
    puVar2 = (uint *)(param_1 + 0x60);
    uVar7 = *puVar2;
    *puVar2 = *puVar2 + uVar5;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (uint)CARRY4(uVar7,uVar5);
    if (uVar5 < 0x1000000) {
      uVar5 = uVar5 << 8;
      FUN_0049e680((int)puVar1);
    }
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar7 = 1;
  do {
    iVar4 = uVar7 * 2;
    uVar3 = *(ushort *)(iVar4 + 0x1c18 + param_1);
    uVar6 = (uVar5 >> 0xb) * (uint)uVar3;
    uVar5 = uVar5 - uVar6;
    puVar2 = (uint *)(param_1 + 0x60);
    uVar7 = *puVar2;
    *puVar2 = *puVar2 + uVar6;
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + (uint)CARRY4(uVar7,uVar6);
    *(ushort *)(iVar4 + 0x1c18 + param_1) = uVar3 - (uVar3 >> 5);
    if (uVar5 < 0x1000000) {
      uVar5 = uVar5 * 0x100;
      FUN_0049e680((int)puVar1);
    }
    uVar7 = iVar4 + 1;
  } while (uVar7 < 0x10);
  *puVar1 = uVar5;
  return;
}


