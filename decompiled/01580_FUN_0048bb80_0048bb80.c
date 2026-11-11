// Function: FUN_0048bb80
// Entry: 0048bb80
// Size: 41 bytes
// Thunk: false
// External: false


undefined4 * __cdecl FUN_0048bb80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0047f911(1,0x328);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = param_3;
  puVar1[200] = 0;
  return puVar1;
}


