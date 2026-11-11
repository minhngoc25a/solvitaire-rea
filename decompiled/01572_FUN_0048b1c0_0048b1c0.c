// Function: FUN_0048b1c0
// Entry: 0048b1c0
// Size: 83 bytes
// Thunk: false
// External: false


undefined4 __cdecl FUN_0048b1c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (((((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) &&
      ((piVar1 = *(int **)(param_1 + 0x1c), piVar1 != (int *)0x0 && (*piVar1 == param_1)))) &&
     (piVar1[1] - 0x3f34U < 0x20)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    if ((param_2 != 0) && (*(uint *)(iVar2 + 0xc) != 0)) {
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 4;
      return 0;
    }
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffffb;
    return 0;
  }
  return 0xfffffffe;
}


