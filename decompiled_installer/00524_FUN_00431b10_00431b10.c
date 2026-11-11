// Function: FUN_00431b10
// Entry: 00431b10
// Size: 39 bytes
// Thunk: false
// External: false


bool __cdecl FUN_00431b10(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    LOCK();
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      *(int *)(param_1 + 0xc) = 0;
      iVar1 = 0;
    }
    UNLOCK();
    return iVar1 == 2;
  }
  return false;
}


