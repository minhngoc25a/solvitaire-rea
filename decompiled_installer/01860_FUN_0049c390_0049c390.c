// Function: FUN_0049c390
// Entry: 0049c390
// Size: 101 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049c390(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x48 + param_4);
  uVar3 = *(byte *)(param_1 + 0x48 + param_3) - uVar2;
  uVar5 = (uint)*(byte *)(uVar3 + 0x6d + param_1);
  puVar1 = (undefined4 *)(param_2 + uVar2 * 0xc);
  if (*(byte *)(uVar5 + 0x48 + param_1) != uVar3) {
    uVar2 = (uint)*(byte *)(uVar5 + 0x47 + param_1);
    uVar5 = uVar5 - 1;
    iVar4 = uVar3 - uVar2;
    puVar1[uVar2 * 3] = *(undefined4 *)(param_1 + 0xec + iVar4 * 4);
    *(undefined4 **)(param_1 + 0xec + iVar4 * 4) = puVar1 + uVar2 * 3;
  }
  *puVar1 = *(undefined4 *)(param_1 + 0xf0 + uVar5 * 4);
  *(undefined4 **)(param_1 + 0xf0 + uVar5 * 4) = puVar1;
  return;
}


