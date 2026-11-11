// Function: FUN_004205ee
// Entry: 004205ee
// Size: 23 bytes
// Thunk: false
// External: false


void FUN_004205ee(undefined4 param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_005434a0);
  (**(code **)((int)pvVar1 + 0x20))(pvVar1,param_1);
  return;
}


