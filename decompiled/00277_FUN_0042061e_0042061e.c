// Function: FUN_0042061e
// Entry: 0042061e
// Size: 45 bytes
// Thunk: false
// External: false


void FUN_0042061e(int param_1,int param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_005434a0);
  (**(code **)((int)pvVar1 + 0x50))
            (pvVar1,*(int *)((int)pvVar1 + 0x8c) + param_1,*(int *)((int)pvVar1 + 0x90) + param_2,
             param_3);
  return;
}


