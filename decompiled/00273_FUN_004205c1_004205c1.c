// Function: FUN_004205c1
// Entry: 004205c1
// Size: 45 bytes
// Thunk: false
// External: false


void FUN_004205c1(undefined4 param_1,int param_2,int param_3)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_005434a0);
  (**(code **)((int)pvVar1 + 0x24))
            (pvVar1,param_1,*(int *)((int)pvVar1 + 0x8c) + param_2,
             *(int *)((int)pvVar1 + 0x90) + param_3);
  return;
}


