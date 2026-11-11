// Function: FUN_00455794
// Entry: 00455794
// Size: 34 bytes
// Thunk: false
// External: false


void __thiscall FUN_00455794(void *this,WCHAR param_1,int *param_2,int *param_3)

{
  bool bVar1;
  
  bVar1 = FUN_00455869(this,param_1,param_3);
  if (bVar1) {
    *param_2 = *param_2 + 1;
  }
  else {
    *param_2 = -1;
  }
  return;
}


