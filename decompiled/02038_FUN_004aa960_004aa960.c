// Function: FUN_004aa960
// Entry: 004aa960
// Size: 49 bytes
// Thunk: false
// External: false


uint __cdecl FUN_004aa960(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)0x0;
  if (param_1 != 0) {
    piVar1 = (int *)(*(uint *)(param_1 + 0xc) >> 0xd);
    if (((uint)piVar1 & 1) != 0) {
      uVar2 = FUN_004aa93d(*(uint *)(param_1 + 0xc));
      if ((char)uVar2 != '\0') {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      *param_2 = *param_2 + 1;
      piVar1 = param_2;
    }
  }
  return (uint)piVar1 & 0xffffff00;
}


