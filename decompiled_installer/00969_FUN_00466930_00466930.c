// Function: FUN_00466930
// Entry: 00466930
// Size: 272 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_00466930(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,1,"archive_write_set_format_7zip");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  if ((code *)param_1[0x31] != (code *)0x0) {
    (*(code *)param_1[0x31])(param_1);
  }
  puVar2 = (undefined4 *)FUN_0047f911(1,0xf0d0);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00487380((int)param_1,0xc,0x52880c);
    return 0xffffffe2;
  }
  *puVar2 = 0xffffffff;
  FUN_0049d930(puVar2 + 0x3c31,&PTR_LAB_0050d088);
  puVar2[0x3c2d] = 0;
  puVar2[0x3c2e] = puVar2 + 0x3c2d;
  puVar2[0x3c2f] = 0;
  puVar2[0x3c30] = puVar2 + 0x3c2f;
  puVar2[0x18] = 0x30101;
  puVar2[0x19] = 6;
  param_1[0x29] = (uint)puVar2;
  param_1[0x2a] = (uint)&DAT_00525820;
  param_1[0x2c] = (uint)&LAB_00466a70;
  param_1[0x2e] = (uint)&LAB_00466ec0;
  param_1[0x2f] = (uint)&LAB_004670c0;
  param_1[0x2d] = (uint)&LAB_00467130;
  param_1[0x30] = (uint)&LAB_00467200;
  param_1[0x31] = (uint)&LAB_00467780;
  param_1[3] = 0xe0000;
  param_1[4] = (uint)&DAT_00525820;
  return 0;
}


