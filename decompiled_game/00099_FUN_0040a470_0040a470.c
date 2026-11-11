// Function: FUN_0040a470
// Entry: 0040a470
// Size: 50 bytes
// Thunk: false
// External: false


int * __cdecl FUN_0040a470(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0x13 < param_1) {
    iVar1 = 4;
    do {
      iVar1 = iVar1 * 2;
      iVar3 = iVar3 + 1;
    } while (iVar1 + 0x10U <= param_1);
  }
  piVar2 = FUN_0040a840(iVar3);
  *piVar2 = iVar3;
  return piVar2 + 1;
}


