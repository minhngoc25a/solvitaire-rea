// Function: FUN_0042057f
// Entry: 0042057f
// Size: 66 bytes
// Thunk: false
// External: false


void FUN_0042057f(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_005434a0);
  if ((0 < param_4) && (0 < param_5)) {
    (**(code **)((int)pvVar1 + 0x28))
              (pvVar1,param_1,*(int *)((int)pvVar1 + 0x8c) + param_2,
               *(int *)((int)pvVar1 + 0x90) + param_3,param_4,param_5);
  }
  return;
}


