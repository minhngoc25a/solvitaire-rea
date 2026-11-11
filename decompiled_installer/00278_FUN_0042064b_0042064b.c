// Function: FUN_0042064b
// Entry: 0042064b
// Size: 41 bytes
// Thunk: false
// External: false


void FUN_0042064b(int param_1,int param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_005434a0);
  (**(code **)((int)pvVar1 + 0x54))
            (pvVar1,*(int *)((int)pvVar1 + 0x8c) + param_1,*(int *)((int)pvVar1 + 0x90) + param_2);
  return;
}


