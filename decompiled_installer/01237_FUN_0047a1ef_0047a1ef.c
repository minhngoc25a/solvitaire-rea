// Function: FUN_0047a1ef
// Entry: 0047a1ef
// Size: 75 bytes
// Thunk: false
// External: false


void __fastcall FUN_0047a1ef(int param_1,int param_2,int param_3)

{
  int extraout_ECX;
  int extraout_EDX;
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    if ((*(int *)(param_3 + -0x10) != 0) && (iVar1 = 0, iVar2 = param_3, 0 < *(int *)(param_3 + -8))
       ) {
      do {
        FUN_004a3931(param_1,param_2,iVar2,*(int **)(param_3 + -0x10));
        iVar2 = iVar2 + *(int *)(param_3 + -0x14);
        iVar1 = iVar1 + 1;
        param_1 = extraout_ECX;
        param_2 = extraout_EDX;
      } while (iVar1 < *(int *)(param_3 + -8));
    }
    **(undefined4 **)(param_3 + -0xc) = 0;
    HeapFree(DAT_00542264,0,(LPVOID)(param_3 + -0x18));
  }
  return;
}


