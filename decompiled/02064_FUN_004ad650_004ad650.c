// Function: FUN_004ad650
// Entry: 004ad650
// Size: 215 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004ad650(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)param_1[6];
  iVar6 = puVar2[1];
  if (iVar6 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') goto LAB_004ad6a9;
    iVar6 = puVar2[1];
  }
  bVar1 = *(byte *)*puVar2;
  pbVar4 = (byte *)*puVar2 + 1;
  iVar6 = iVar6 + -1;
  if (iVar6 == 0) {
    uVar3 = (*(code *)puVar2[3])(param_1);
    if ((char)uVar3 == '\0') {
LAB_004ad6a9:
      return uVar3 & 0xffffff00;
    }
    pbVar4 = (byte *)*puVar2;
    iVar6 = puVar2[1];
  }
  iVar5 = (uint)*pbVar4 + (uint)bVar1 * 0x100 + -2;
  *(undefined4 *)(*param_1 + 0x14) = 0x5d;
  *(int *)(*param_1 + 0x18) = param_1[0x65];
  *(int *)(*param_1 + 0x1c) = iVar5;
  (**(code **)(*param_1 + 4))(param_1,1);
  *puVar2 = pbVar4 + 1;
  iVar6 = iVar6 + -1;
  puVar2[1] = iVar6;
  if (0 < iVar5) {
    iVar6 = (**(code **)(param_1[6] + 0x10))(param_1,iVar5);
  }
  return CONCAT31((int3)((uint)iVar6 >> 8),1);
}


