// Function: FUN_0049c2f0
// Entry: 0049c2f0
// Size: 151 bytes
// Thunk: false
// External: false


ushort * __cdecl FUN_0049c2f0(undefined4 *param_1,uint param_2,int *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = (ushort *)*param_1;
  uVar3 = (uint)*puVar1;
  uVar5 = uVar3 - param_2;
  if (*puVar1 != 0x100) {
    iVar4 = (uVar5 < **(ushort **)(puVar1 + 4) - uVar3) + 0x123 +
            (-(uint)((uint)puVar1[1] < uVar3 * 0xb) & 2) +
            (uint)*(byte *)(uVar5 + 0x187 + (int)param_1) * 0x10 + (-(uint)(uVar5 < param_2) & 4) +
            param_1[7];
    puVar1 = (ushort *)(param_1 + iVar4);
    uVar2 = *puVar1 >> (*(byte *)((int)param_1 + iVar4 * 4 + 2) & 0x1f);
    *puVar1 = *puVar1 - uVar2;
    *param_3 = (uint)(uVar2 == 0) + (uint)uVar2;
    return puVar1;
  }
  *param_3 = 1;
  return (ushort *)(param_1 + 0x122);
}


