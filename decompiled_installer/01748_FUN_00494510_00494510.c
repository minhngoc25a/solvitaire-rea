// Function: FUN_00494510
// Entry: 00494510
// Size: 108 bytes
// Thunk: false
// External: false


undefined4 * FUN_00494510(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uStack00000004;
  
  puVar1 = (undefined4 *)FUN_0047f911(1,0xd8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xb0c5c0de;
    puVar1[1] = 1;
    puVar1[2] = &PTR_LAB_00518948;
    puVar1[0x25] = 0x2800;
    puVar1[0x26] = 0xffffffff;
    puVar1[0x1f] = 0x400;
    iVar2 = FUN_0047f911(1,0x400);
    if (iVar2 != 0) {
      puVar1[0x1e] = iVar2;
      return puVar1;
    }
    uStack00000004 = 0x49456e;
    FUN_0047d191(puVar1);
  }
  return (undefined4 *)0x0;
}


