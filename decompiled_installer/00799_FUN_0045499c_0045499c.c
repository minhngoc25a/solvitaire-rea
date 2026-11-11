// Function: FUN_0045499c
// Entry: 0045499c
// Size: 34 bytes
// Thunk: false
// External: false


void __thiscall FUN_0045499c(void *this,byte param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = FUN_00454a75(this,param_1,param_3);
  if (bVar1) {
    *param_2 = *param_2 + 1;
  }
  else {
    *param_2 = -1;
  }
  return;
}


