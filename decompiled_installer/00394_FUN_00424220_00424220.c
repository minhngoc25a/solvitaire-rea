// Function: FUN_00424220
// Entry: 00424220
// Size: 34 bytes
// Thunk: false
// External: false


void FUN_00424220(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_0053fba8);
  *(int *)((int)pvVar1 + 0x19c) = *(int *)((int)pvVar1 + 0x19c) + -1;
  *(undefined4 *)((int)pvVar1 + 8) =
       *(undefined4 *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x19c) * 4 + 0xc);
  return;
}


