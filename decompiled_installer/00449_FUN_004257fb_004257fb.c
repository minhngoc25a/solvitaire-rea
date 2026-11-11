// Function: FUN_004257fb
// Entry: 004257fb
// Size: 64 bytes
// Thunk: false
// External: false


void __cdecl FUN_004257fb(int *param_1,int param_2)

{
  int *lpMem;
  
  lpMem = (int *)(param_2 + -8);
  if ((int *)*param_1 == lpMem) {
    *param_1 = *lpMem;
    if (*lpMem != 0) {
      *(undefined4 *)(*lpMem + 4) = 0;
    }
  }
  else {
    **(int **)(param_2 + -4) = *lpMem;
    if (*lpMem != 0) {
      *(undefined4 *)(*lpMem + 4) = *(undefined4 *)(param_2 + -4);
    }
  }
  HeapFree(DAT_00542264,0,lpMem);
  return;
}


