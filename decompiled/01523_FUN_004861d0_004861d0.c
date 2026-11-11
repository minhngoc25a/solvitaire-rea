// Function: FUN_004861d0
// Entry: 004861d0
// Size: 49 bytes
// Thunk: false
// External: false


int __cdecl FUN_004861d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0x100;
  do {
    iVar1 = iVar3 + iVar2 >> 1;
    if (*(int *)(param_2 + iVar1 * 4) <= param_1) {
      iVar2 = iVar1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar1 - iVar2 != 1);
  return iVar2;
}


