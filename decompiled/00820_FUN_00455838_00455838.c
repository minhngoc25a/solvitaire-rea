// Function: FUN_00455838
// Entry: 00455838
// Size: 49 bytes
// Thunk: false
// External: false


bool __thiscall FUN_00455838(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[6] = 0x16;
    FUN_0042454a((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0,param_1);
  }
  return iVar1 != 0;
}


