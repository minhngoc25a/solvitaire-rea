// Function: FUN_0049eaa0
// Entry: 0049eaa0
// Size: 140 bytes
// Thunk: false
// External: false


void __cdecl FUN_0049eaa0(int param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    uVar1 = *(ushort *)(param_1 + 8 + (uVar2 >> 1) * 2);
    iVar3 = *(int *)(param_4 +
                    ((uint)(*(ushort *)(param_1 + 4 + (uVar2 >> 2) * 2) >> 4) ^
                    -(uVar2 >> 1 & 1) >> 4 & 0x7f) * 4) +
            *(int *)(param_4 + ((-(uVar2 >> 2) & 0x7f0 ^ (uint)*(ushort *)(param_1 + 2)) >> 4) * 4)
            + param_2;
    *(int *)(param_3 + uVar2 * 4) = *(int *)(param_4 + (uint)(uVar1 >> 4) * 4) + iVar3;
    *(int *)(param_3 + 4 + uVar2 * 4) = *(int *)(param_4 + ((uVar1 ^ 0x7f0) >> 4) * 4) + iVar3;
    uVar2 = uVar2 + 2;
  } while (uVar2 < 8);
  return;
}


