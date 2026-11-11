// Function: FUN_0045e2d0
// Entry: 0045e2d0
// Size: 229 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0045e2d0(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,1,"archive_write_set_format_pax_restricted");
  if (iVar1 == -0x1e) {
    return 0xffffffe2;
  }
  iVar1 = FUN_00493d30(param_1,0xb0c5c0de,1,"archive_write_set_format_pax");
  if (iVar1 != -0x1e) {
    if ((code *)param_1[0x31] != (code *)0x0) {
      (*(code *)param_1[0x31])(param_1);
    }
    uVar2 = FUN_0047f911(1,0x50);
    if (uVar2 != 0) {
      *(undefined4 *)(uVar2 + 0x48) = 3;
      param_1[0x29] = uVar2;
      param_1[0x2a] = (uint)&DAT_00523c50;
      param_1[0x2c] = (uint)&LAB_0045ff40;
      param_1[0x2e] = (uint)FUN_0045e8b0;
      param_1[0x2f] = (uint)FUN_0045e6a0;
      param_1[0x30] = (uint)&LAB_0045e7a0;
      param_1[0x31] = (uint)&LAB_0045e7c0;
      param_1[0x2d] = (uint)FUN_0045e830;
      param_1[3] = 0x30003;
      param_1[4] = (uint)"restricted POSIX pax interchange";
      return 0;
    }
    FUN_00487380((int)param_1,0xc,0x5286d4);
  }
  param_1[3] = 0x30003;
  param_1[4] = (uint)"restricted POSIX pax interchange";
  return 0xffffffe2;
}


