// Function: FUN_004a2088
// Entry: 004a2088
// Size: 66 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004a2088(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  iVar2 = param_1[3];
  puVar1 = (uint *)(param_1 + 2);
  param_1[3] = iVar2 + -1;
  if (iVar2 == 0) {
    uVar4 = *(ushort *)*param_1;
    param_1[3] = 0xf;
    *puVar1 = (uint)uVar4;
    *param_1 = (int)((ushort *)*param_1 + 1);
  }
  uVar3 = *puVar1;
  *puVar1 = uVar3 * 2;
  return uVar3 >> 0xf & 1;
}


