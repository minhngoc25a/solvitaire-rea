// Function: FUN_00494a10
// Entry: 00494a10
// Size: 261 bytes
// Thunk: false
// External: false


int __cdecl FUN_00494a10(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  SIZE_T SVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LPVOID pvVar7;
  
  puVar1 = *(uint **)(param_1 + 8);
  iVar4 = FUN_00493d30(puVar1,0xb0c5c0de,0x7fff,"archive_write_get_bytes_per_block");
  uVar5 = 0xffffffe2;
  if (iVar4 != -0x1e) {
    uVar5 = puVar1[0x25];
  }
  puVar2 = *(uint **)(param_1 + 8);
  *(uint *)(param_1 + 0x30) = uVar5;
  iVar4 = FUN_00493d30(puVar2,0xb0c5c0de,0x7fff,"archive_write_get_bytes_in_last_block");
  uVar5 = 0xffffffe2;
  if (iVar4 != -0x1e) {
    uVar5 = puVar2[0x26];
  }
  SVar3 = *(SIZE_T *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x34) = uVar5;
  puVar6 = (undefined4 *)FUN_0047f911(1,0x10);
  pvVar7 = (LPVOID)FUN_00482949(SVar3);
  if ((puVar6 != (undefined4 *)0x0) && (pvVar7 != (LPVOID)0x0)) {
    *puVar6 = param_3;
    puVar6[2] = pvVar7;
    puVar6[3] = pvVar7;
    puVar6[1] = param_3;
    *(undefined4 **)(param_1 + 0x24) = puVar6;
    if ((code *)puVar1[0x20] == (code *)0x0) {
      return 0;
    }
    iVar4 = (*(code *)puVar1[0x20])(*(undefined4 *)(param_1 + 8),puVar1[0x24]);
    if (iVar4 != 0) {
      FUN_0047d191((LPVOID)puVar6[2]);
      FUN_0047d191(puVar6);
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
    return iVar4;
  }
  FUN_0047d191(puVar6);
  FUN_0047d191(pvVar7);
  FUN_00487380(*(int *)(param_1 + 8),0xc,0x5267bc);
  return -0x1e;
}


