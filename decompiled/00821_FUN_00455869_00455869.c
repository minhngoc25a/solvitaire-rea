// Function: FUN_00455869
// Entry: 00455869
// Size: 61 bytes
// Thunk: false
// External: false


bool __thiscall FUN_00455869(void *this,WCHAR param_1,int *param_2)

{
  short sVar1;
  bool bVar2;
  
  if (((*(uint *)(*(int *)this + 0xc) >> 0xc & 1) == 0) || (*(int *)(*(int *)this + 4) != 0)) {
    sVar1 = FUN_0048580d(param_1,*(FILE **)this,param_2);
    bVar2 = sVar1 != -1;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


