// Function: FUN_004241c0
// Entry: 004241c0
// Size: 32 bytes
// Thunk: false
// External: false


void FUN_004241c0(void)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_0053fba8);
  *(undefined4 *)((int)pvVar1 + *(int *)((int)pvVar1 + 0x19c) * 4 + 0xc) =
       *(undefined4 *)((int)pvVar1 + 8);
  *(int *)((int)pvVar1 + 0x19c) = *(int *)((int)pvVar1 + 0x19c) + 1;
  return;
}


