// Function: FUN_00487ef0
// Entry: 00487ef0
// Size: 292 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00487ef0(uint *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_add_callback_data");
  if (iVar2 == -0x1e) {
    return 0xffffffe2;
  }
  if (param_1[0x24] < param_3) {
    FUN_00487380((int)param_1,0x16,0x52a630);
    return 0xffffffe2;
  }
  uVar3 = param_1[0x24] + 1;
  param_1[0x24] = uVar3;
  uVar3 = FUN_00482954((LPVOID)param_1[0x28],uVar3 * 0x18);
  if (uVar3 == 0) {
    FUN_00487380((int)param_1,0xc,0x529d3c);
    return 0xffffffe2;
  }
  uVar4 = param_1[0x24] - 1;
  param_1[0x28] = uVar3;
  if (param_3 < uVar4) {
    iVar5 = uVar4 - param_3;
    iVar2 = uVar4 * 0x18;
    do {
      iVar1 = iVar2 + -0x18;
      *(undefined4 *)(param_1[0x28] + 0x28 + iVar1) = *(undefined4 *)(param_1[0x28] + 0x10 + iVar1);
      uVar3 = param_1[0x28];
      *(undefined4 *)(iVar2 + uVar3) = 0xffffffff;
      *(undefined4 *)(iVar2 + 4 + uVar3) = 0xffffffff;
      uVar3 = param_1[0x28];
      *(undefined4 *)(iVar2 + 8 + uVar3) = 0xffffffff;
      *(undefined4 *)(iVar2 + 0xc + uVar3) = 0xffffffff;
      iVar5 = iVar5 + -1;
      iVar2 = iVar1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1[0x28] + 0x10 + param_3 * 0x18) = param_4;
  uVar3 = param_1[0x28];
  *(undefined4 *)(uVar3 + param_3 * 0x18) = 0xffffffff;
  *(undefined4 *)(uVar3 + 4 + param_3 * 0x18) = 0xffffffff;
  uVar3 = param_1[0x28];
  *(undefined4 *)(uVar3 + 8 + param_3 * 0x18) = 0xffffffff;
  *(undefined4 *)(uVar3 + 0xc + param_3 * 0x18) = 0xffffffff;
  return 0;
}


