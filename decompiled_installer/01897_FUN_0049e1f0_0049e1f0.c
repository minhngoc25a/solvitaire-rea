// Function: FUN_0049e1f0
// Entry: 0049e1f0
// Size: 274 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0049e1f0(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint local_40 [4];
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_0049e0e0(local_40);
  if (((((int)local_40[2] < 9) && ((int)local_40[3] < 5)) && (local_30 < 5)) &&
     ((local_40[1] < 0xf0000001 && (local_40[1] < 0x8000001)))) {
    *(uint *)(param_1 + 0xcc) = local_40[1];
    if (local_28 < 5) {
      local_28 = 5;
    }
    else if (0x111 < local_28) {
      local_28 = 0x111;
    }
    *(uint *)(param_1 + 0x30) = local_28;
    *(uint *)(param_1 + 0x98) = local_40[3];
    *(uint *)(param_1 + 0xa4) = (uint)(local_2c == 0);
    *(int *)(param_1 + 0x9c) = local_30;
    *(uint *)(param_1 + 0x94) = local_40[2];
    *(bool *)(param_1 + 0xf5) = local_24 != 0;
    iVar1 = 4;
    if (local_24 != 0) {
      if (local_20 < 2) {
        iVar1 = 2;
      }
      else if (local_20 < 4) {
        iVar1 = local_20;
      }
    }
    if (4 < local_20) {
      iVar1 = 5;
    }
    *(undefined4 *)(param_1 + 0x108) = local_1c;
    *(int *)(param_1 + 0x120) = iVar1;
    *(undefined4 *)(param_1 + 0xa8) = local_18;
    return 0;
  }
  return 5;
}


