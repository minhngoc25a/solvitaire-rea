// Function: FUN_004a20ca
// Entry: 004a20ca
// Size: 35 bytes
// Thunk: false
// External: false


int __cdecl FUN_004a20ca(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 1;
  do {
    uVar1 = FUN_004a2088(param_1);
    iVar2 = uVar1 + iVar2 * 2;
    uVar1 = FUN_004a2088(param_1);
  } while (uVar1 != 0);
  return iVar2;
}


