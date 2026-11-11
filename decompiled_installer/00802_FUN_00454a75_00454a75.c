// Function: FUN_00454a75
// Entry: 00454a75
// Size: 58 bytes
// Thunk: false
// External: false


bool __thiscall FUN_00454a75(void *this,byte param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (((*(uint *)(*(int *)this + 0xc) >> 0xc & 1) == 0) || (*(int *)(*(int *)this + 4) != 0)) {
    uVar1 = FUN_00485979(param_1,*(FILE **)this,param_2);
    bVar2 = uVar1 != 0xffffffff;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


