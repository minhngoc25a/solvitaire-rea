// Function: FUN_0040a840
// Entry: 0040a840
// Size: 205 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0040a840(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  FUN_0040a720();
  iVar1 = DAT_004109c8;
  if (param_1 < 10) {
    puVar2 = *(undefined4 **)(&DAT_004109a0 + param_1 * 4);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)(&DAT_004109a0 + param_1 * 4) = *puVar2;
      goto joined_r0x0040a8b7;
    }
    iVar4 = 1 << ((byte)param_1 & 0x1f);
    uVar3 = iVar4 * 4 + 0x1bU >> 3;
    if (0x120 < ((int)(PTR_DAT_0040c024 + -0x4100a0) >> 3) + uVar3) goto LAB_0040a899;
    puVar2 = (undefined4 *)PTR_DAT_0040c024;
    PTR_DAT_0040c024 = PTR_DAT_0040c024 + uVar3 * 8;
  }
  else {
    iVar4 = 1 << ((byte)param_1 & 0x1f);
    uVar3 = iVar4 * 4 + 0x1bU >> 3;
LAB_0040a899:
    puVar2 = malloc(uVar3 << 3);
    if (puVar2 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  iVar1 = DAT_004109c8;
  puVar2[1] = param_1;
  puVar2[2] = iVar4;
joined_r0x0040a8b7:
  if (iVar1 == 2) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_004109e0);
  }
  puVar2[4] = 0;
  puVar2[3] = 0;
  return puVar2;
}


