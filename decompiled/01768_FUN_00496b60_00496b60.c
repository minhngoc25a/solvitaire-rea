// Function: FUN_00496b60
// Entry: 00496b60
// Size: 97 bytes
// Thunk: false
// External: false


void __cdecl FUN_00496b60(int param_1)

{
  ushort *puVar1;
  uint uVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = *(int *)(param_1 + 0x4c);
  uVar2 = *(uint *)(param_1 + 0x2c);
  psVar4 = (short *)(*(int *)(param_1 + 0x44) + iVar5 * 2);
  do {
    puVar1 = (ushort *)(psVar4 + -1);
    psVar4 = psVar4 + -1;
    sVar3 = *puVar1 - (short)uVar2;
    if (*puVar1 < uVar2) {
      sVar3 = 0;
    }
    *psVar4 = sVar3;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  psVar4 = (short *)(*(int *)(param_1 + 0x40) + uVar2 * 2);
  uVar6 = uVar2;
  do {
    puVar1 = (ushort *)(psVar4 + -1);
    psVar4 = psVar4 + -1;
    sVar3 = *puVar1 - (short)uVar2;
    if (*puVar1 < uVar2) {
      sVar3 = 0;
    }
    *psVar4 = sVar3;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}


