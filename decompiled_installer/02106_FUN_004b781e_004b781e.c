// Function: FUN_004b781e
// Entry: 004b781e
// Size: 36 bytes
// Thunk: false
// External: false


void __cdecl FUN_004b781e(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *lpMem;
  
  lpMem = (undefined4 *)*param_1;
  while (lpMem != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*lpMem;
    HeapFree(DAT_00542264,0,lpMem);
    lpMem = puVar1;
  }
  *param_1 = 0;
  return;
}


