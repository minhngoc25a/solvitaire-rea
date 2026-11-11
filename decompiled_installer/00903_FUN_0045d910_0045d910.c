// Function: FUN_0045d910
// Entry: 0045d910
// Size: 136 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0045d910(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_00494820((int)param_1);
  iVar2 = FUN_00493d30(param_1,0xb0c5c0de,1,"archive_write_add_filter_bzip2");
  if (iVar2 != -0x1e) {
    puVar3 = (undefined4 *)FUN_0047f911(1,0x48);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 9;
      *(undefined4 **)(iVar1 + 0x24) = puVar3;
      *(undefined1 **)(iVar1 + 0x10) = &LAB_0045dbe0;
      *(undefined1 **)(iVar1 + 0x1c) = &LAB_0045d9a0;
      *(undefined1 **)(iVar1 + 0x20) = &LAB_0045da60;
      *(undefined1 **)(iVar1 + 0x14) = &LAB_0045da90;
      *(undefined4 *)(iVar1 + 0x2c) = 2;
      *(char **)(iVar1 + 0x28) = "bzip2";
      return 0;
    }
    FUN_00487380((int)param_1,0xc,0x523890);
  }
  return 0xffffffe2;
}


