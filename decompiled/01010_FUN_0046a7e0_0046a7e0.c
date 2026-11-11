// Function: FUN_0046a7e0
// Entry: 0046a7e0
// Size: 54 bytes
// Thunk: false
// External: false


void FUN_0046a7e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = HeapAlloc(DAT_00542264,0,0xc);
  if ((param_1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0x0)) {
    puVar1[1] = *param_1;
    puVar1[2] = param_1[5];
    *puVar1 = param_1[0xd];
    param_1[0xd] = puVar1;
  }
  return;
}


