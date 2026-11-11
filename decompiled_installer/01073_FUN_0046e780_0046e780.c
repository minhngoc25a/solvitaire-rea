// Function: FUN_0046e780
// Entry: 0046e780
// Size: 78 bytes
// Thunk: false
// External: false


undefined4 * __cdecl
FUN_0046e780(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0046baf0(param_1,param_2,param_3,param_4,0,0,0);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x1e] = puVar1[0x1e] | 0x300000;
    puVar1[0x1d] = 0x8000;
    puVar1[0xaa] = 0x2000;
    FUN_004741b0((int)puVar1,0,(undefined1 *)0x0);
  }
  return puVar1;
}


