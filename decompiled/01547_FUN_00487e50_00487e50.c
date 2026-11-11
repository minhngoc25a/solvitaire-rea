// Function: FUN_00487e50
// Entry: 00487e50
// Size: 156 bytes
// Thunk: false
// External: false


undefined4 __cdecl
FUN_00487e50(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00493d30(param_1,0xdeb0c5,1,"archive_read_set_callback_data2");
  if (iVar2 == -0x1e) {
    return 0xffffffe2;
  }
  if (param_1[0x24] == 0) {
    uVar3 = FUN_0047f911(1,0x18);
    param_1[0x28] = uVar3;
    if (uVar3 == 0) {
      FUN_00487380((int)param_1,0xc,0x529d3c);
      return 0xffffffe2;
    }
    param_1[0x24] = 1;
  }
  *(undefined4 *)(param_1[0x28] + 0x10) = param_4;
  puVar1 = (undefined4 *)param_1[0x28];
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar3 = param_1[0x28];
  *(undefined4 *)(uVar3 + 8) = 0xffffffff;
  *(undefined4 *)(uVar3 + 0xc) = 0xffffffff;
  return 0;
}


