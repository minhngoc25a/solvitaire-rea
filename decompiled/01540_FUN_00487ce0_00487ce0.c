// Function: FUN_00487ce0
// Entry: 00487ce0
// Size: 72 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_00487ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)FUN_0047f911(1,0x460);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0xdeb0c5;
  puVar1[1] = 1;
  puVar2 = FUN_0048bb80(puVar1,param_1,param_2);
  puVar1[0x18] = puVar2;
  puVar1[2] = &PTR_LAB_0050f10c;
  puVar1[0x114] = puVar1 + 0x113;
  return puVar1;
}


